import cv2
import socket
import json
import math
import numpy as np
import mediapipe as mp
from mediapipe.tasks import python
from mediapipe.tasks.python import vision

# 1. UDP Soket Kurulumu
UDP_IP = "127.0.0.1"
UDP_PORT = 5005
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# 2. MediaPipe Tasks API Kurulumu
base_options = python.BaseOptions(model_asset_path='hand_landmarker.task')
options = vision.HandLandmarkerOptions(base_options=base_options, num_hands=1)
detector = vision.HandLandmarker.create_from_options(options)

cap = cv2.VideoCapture(0)
print(f"UDP Veri Gonderimi Basladi: {UDP_IP}:{UDP_PORT}")

while cap.isOpened():
    ret, frame = cap.read()
    if not ret:
        break

    frame = cv2.flip(frame, 1)
    h, w, _ = frame.shape

    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    mp_image = mp.Image(image_format=mp.ImageFormat.SRGB, data=rgb_frame)
    detection_result = detector.detect(mp_image)

    # Varsayılan paket (El görünmüyorsa detected: False gider)
    payload = {
        "detected": False,
        "pinch_ratio": 0.0,
        "index_x": 0.0,
        "index_y": 0.0
    }

    if detection_result.hand_landmarks:
        for hand_landmarks in detection_result.hand_landmarks:
            index_finger_tip = hand_landmarks[8]
            thumb_finger_tip = hand_landmarks[4]

            cx_index, cy_index = int(index_finger_tip.x * w), int(index_finger_tip.y * h)
            cx_thumb, cy_thumb = int(thumb_finger_tip.x * w), int(thumb_finger_tip.y * h)

            # Görselleştirme
            cv2.circle(frame, (cx_index, cy_index), 8, (0, 255, 0), cv2.FILLED)
            cv2.circle(frame, (cx_thumb, cy_thumb), 8, (0, 255, 0), cv2.FILLED)
            cv2.line(frame, (cx_index, cy_index), (cx_thumb, cy_thumb), (255, 0, 0), 2)

            # Mesafe hesabı ve 0.0 - 1.0 arasına normalize etme
            distance = math.dist((cx_index, cy_index), (cx_thumb, cy_thumb))
            normalized_pinch = float(np.clip(np.interp(distance, [20, 160], [0.0, 1.0]), 0.0, 1.0))

            payload = {
                "detected": True,
                "pinch_ratio": round(normalized_pinch, 3),
                "index_x": round(float(index_finger_tip.x), 3),
                "index_y": round(float(index_finger_tip.y), 3)
            }
            break

    # PAKETİ UNREAL ENGINE'E GÖNDER
    sock.sendto(json.dumps(payload).encode('utf-8'), (UDP_IP, UDP_PORT))

    cv2.imshow('Python Computer Vision', frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()