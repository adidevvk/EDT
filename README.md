Project Title: Heart Rate Monitor System using ESP32
👨‍💻 Team Members
Adidev (24BAI70251)

Pranav Dubey (24BAI70282)

Navdeep Sharma (24BAI70284)

Saksham Sharma (24BAI70288)

📍 Project Description
This project is a portable, real-time heart rate and SpO2 monitoring device built using the ESP32 microcontroller and the MAX30100/MAX30102 pulse oximeter sensor. It uses an OLED display to show the BPM and SpO2 levels and supports IoT connectivity for remote health tracking.

🧠 Objective
To design a low-cost, IoT-based health monitoring solution that displays vital health parameters locally and can transmit them to an online platform for remote access.

🛠️ Hardware Used
ESP32 Dev Module

MAX30100 / MAX30102 Pulse Oximeter Sensor

OLED Display (128x64, I2C)

Breadboard & Jumper Wires

Battery module (for portability)

💻 Software Used
Arduino IDE

Libraries:

Adafruit_SSD1306

Adafruit_GFX

Wire

PulseSensor Playground (for signal processing)

Blynk / Ubidots (for IoT)

🧪 Features & Functionality
Real-time monitoring of heart rate and SpO2

OLED display for live local feedback

IoT integration for remote monitoring

Battery-powered portability

Accurate and responsive data visualization

🔧 How to Run
Connect the MAX30100 sensor and OLED to ESP32 (I2C: SDA → GPIO21, SCL → GPIO22 recommended).

Flash the code via Arduino IDE.

Ensure libraries are installed.

Power the ESP32 and observe real-time vitals on the OLED screen.

(Optional) Connect to Blynk/Ubidots to stream data online.
