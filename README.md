# DroneProject: ESP32-C6 Micro DIY Quadcopter

This repository contains the hardware configuration and pinout for a lightweight DIY drone project utilizing the *
*ESP32-C6-ZERO** and **DRV8833** motor drivers.

---

## dParts List

* **MCU:** ESP32-C6-ZERO (RISC-V, Wi-Fi 6, Bluetooth 5)
* **Motor Drivers:** 2 x DRV8833 Dual H-Bridge
* **Motors:** 4 x Micro DC Motors (Coreless)
* **Power:** 1S LiPo Battery (3.7V)
* **Props:** 4 x Propellers (2 x CW, 2 x CCW)

---

## Wiring Diagram

### Logic Pinout (ESP32 to Drivers)

| ESP32-C6 Pin | Driver Pin    | Motor Target |
|:-------------|:--------------|:-------------|
| **GPIO 0**   | Driver 1: IN1 | Motor 1 (A)  |
| **GPIO 1**   | Driver 1: IN2 | Motor 1 (B)  |
| **GPIO 2**   | Driver 1: IN3 | Motor 2 (A)  |
| **GPIO 3**   | Driver 1: IN4 | Motor 2 (B)  |
| **GPIO 15**  | Driver 2: IN1 | Motor 3 (A)  |
| **GPIO 18**  | Driver 2: IN2 | Motor 3 (B)  |
| **GPIO 19**  | Driver 2: IN3 | Motor 4 (A)  |
| **GPIO 20**  | Driver 2: IN4 | Motor 4 (B)  |

### Power Distribution

> [!CAUTION]
> **Avoid powering motors through the ESP32 3.3V pin.** High current draw will cause system instability.

* **LiPo (+)** → DRV8833 VCC (Both Modules)
* **LiPo (-)** → GND (Common Ground for ESP32 and Drivers)
* **ESP32 VIN** → LiPo (+)

---

## Motor Orientation

For stable flight, ensure motors are wired to spin in the correct directions to counteract torque:

1. **Motor 1 (Front-Left):** Clockwise (CW)
2. **Motor 2 (Front-Right):** Counter-Clockwise (CCW)
3. **Motor 3 (Rear-Left):** Counter-Clockwise (CCW)
4. **Motor 4 (Rear-Right):** Clockwise (CW)

---

## Software Recommendations

* **PWM Frequency:** 20kHz - 30kHz for smooth motor response.
* **Communication:** Use ESP-NOW or Bluetooth Low Energy (BLE) for low-latency control.
* **Safety:** Implement a "failsafe" to cut power if the controller signal is lost.

---

**Last Updated:** 03/05/2026