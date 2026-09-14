# 🌦️ Arduino-Based Weather Monitoring & Environmental Safety Station

An Arduino Uno based environmental monitoring system designed and simulated in **Tinkercad**. The project monitors multiple environmental parameters using sensors and displays the collected information on a **16x2 LCD**. A piezo buzzer is also used to provide an audible warning when predefined safety conditions are detected.

This project was developed as a **Minor Project for the IoT & Robotics Training Program**.

---

## 📌 Project Overview

The **Weather Monitoring and Environmental Safety Station** is an embedded-system project based on the **Arduino Uno R3**.

The system continuously collects environmental information from:

- 🌡️ **TMP36 Temperature Sensor** – measures temperature
- 💡 **Photoresistor / LDR** – detects ambient light intensity
- 🛡️ **Gas Sensor** – detects changes in gas concentration
- 🔊 **Piezo Buzzer** – generates an alert when unsafe conditions are detected
- 📺 **16x2 LCD** – displays sensor readings and system information

The complete circuit was designed and tested virtually using **Autodesk Tinkercad**, allowing the system to be developed and tested without requiring physical hardware.

---

## 🎯 Objectives

The main objectives of this project are:

1. To design an Arduino-based environmental monitoring system.
2. To measure temperature using the TMP36 sensor.
3. To monitor ambient light intensity using an LDR.
4. To monitor gas concentration using a gas sensor.
5. To display real-time sensor information on a 16x2 LCD.
6. To generate an audible warning using a piezo buzzer when abnormal conditions are detected.
7. To understand sensor interfacing and analog data acquisition using Arduino.
8. To simulate, test, and troubleshoot an embedded system using Tinkercad.

---

## ✨ Features

- Real-time environmental monitoring
- Temperature measurement
- Ambient light monitoring
- Gas detection
- 16x2 LCD output
- Audible warning using piezo buzzer
- Arduino Uno based control
- Analog sensor interfacing
- Tinkercad simulation
- Simple and low-cost design
- Suitable for educational and prototype applications

---

## 🧰 Components Used

| Component | Quantity | Purpose |
|---|---:|---|
| Arduino Uno R3 | 1 | Main microcontroller |
| 16x2 LCD | 1 | Displays sensor readings |
| TMP36 Temperature Sensor | 1 | Temperature measurement |
| Gas Sensor | 1 | Gas concentration detection |
| Photoresistor / LDR | 1 | Ambient light measurement |
| Potentiometer | 1 | LCD contrast adjustment |
| Piezo Buzzer | 1 | Audible alert |
| 220 Ω Resistor | 1 | Circuit protection/current limiting |
| 1 kΩ Resistors | 3 | Sensor/buzzer circuit connections |
| Breadboard | 1 | Prototyping and wiring |
| Jumper Wires | Several | Electrical connections |
| USB Power Source | 1 | Arduino power/programming |

---

## 🏗️ System Architecture

The basic system architecture is:

```text
                 ┌─────────────────────┐
                 │    TMP36 Sensor     │
                 │   Temperature       │
                 └──────────┬──────────┘
                            │
                            │
                 ┌──────────▼──────────┐
                 │                     │
                 │    ARDUINO UNO      │
                 │                     │
                 │  Data Processing    │
                 │  & Control Logic    │
                 │                     │
                 └─────┬─────────┬─────┘
                       │         │
              ┌────────▼───┐   ┌─▼─────────────┐
              │ 16x2 LCD   │   │ Piezo Buzzer  │
              │  Display   │   │    Alert      │
              └────────────┘   └───────────────┘

      ┌─────────────────┐
      │ Photoresistor   │
      │      / LDR      │
      └────────┬────────┘
               │
               ▼
         Arduino Uno

      ┌─────────────────┐
      │    Gas Sensor   │
      └────────┬────────┘
               │
               ▼
         Arduino Uno
