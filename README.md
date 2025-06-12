# 🚗 Arduino-Based Alcohol Detection and Engine Lock System

## 🔒 Overview

This project is a smart vehicle safety system designed to prevent drunk driving. It detects the presence of alcohol in the driver’s breath using an MQ-3 sensor and immediately disables the vehicle’s engine if alcohol exceeds a safe threshold. The system also triggers visual and audible alerts to notify the driver and surrounding individuals.

## 🎯 Objectives

- 🔐 Prevent operation of vehicles by intoxicated drivers.
- 🛑 Automatically lock the engine upon alcohol detection.
- 📢 Warn surrounding people using a buzzer and LED indicators.
- 💡 Provide a real-time, responsive, and low-cost safety solution.

## 🧰 Hardware Components

- Arduino Uno
- MQ-3 Alcohol Sensor
- BO Motor
- Motor Driver (L298N)
- Breadboard & Jumper Wires
- LED & Buzzer
- 9V Battery

## 💻 Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software)
- Source code: [`adels.ino`](./adels.ino)

## 🧪 How It Works

1. The MQ-3 sensor continuously monitors alcohol vapor from the driver's breath.
2. Based on detected levels:
   - If alcohol level is **below 300 ppm**, the vehicle engine runs normally.
   - Between **300–430 ppm**, engine speed is reduced.
   - Above **430 ppm**, the engine is shut down and alerts are triggered.
3. The system is automatic and requires no manual input from the driver.

## 🔁 System Design Overview

- **Sensor:** MQ-3 detects ethanol concentration.
- **Microcontroller:** Arduino processes sensor data and controls outputs.
- **Actuators:** Motor (engine), LED (visual), Buzzer (auditory).
- **Control Flow:** Alcohol → Sensor → Arduino → Engine Control + Alerts

## 📦 File Structure

.
├── adels.ino # Main Arduino source code
├── README.md # Project documentation
└── images/ # Photos of implementation or circuit diagrams


## 📊 Results

- System successfully prevents engine start when alcohol is detected.
- Audible and visual alerts raise awareness.
- Cost-effective and easy to implement with basic components.

## 🔮 Future Enhancements

- 📡 GSM or GPS module for alerting authorities.
- 📱 Mobile integration via Bluetooth or Wi-Fi.
- 🤖 Machine learning for personalized BAC thresholds.
- 🔋 Power optimization for real-time deployment.

## 📚 References

- [Arduino Official Documentation](https://www.arduino.cc)
- Vijay Madisetti & Arshdeep Bahga – *Internet of Things: A Hands-on Approach*
- [ResearchGate](https://www.researchgate.net)
- [Diagrams.net](https://app.diagrams.net)

---

> 💡 Project by Dept. of CSE, Dr.AIT 
