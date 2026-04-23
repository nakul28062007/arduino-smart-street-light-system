# Smart Street Light System 🌃

An Arduino-based smart street lighting system that automatically controls street lamps based on ambient light and motion detection — simulating real-world energy-efficient street lighting.

---

## 📌 Project Description

This project implements a two-stage intelligent street light controller using an Arduino UNO. The system first uses an LDR (Light Dependent Resistor) module to determine whether it is day or night. If it is night, it then uses an IR sensor to detect the presence of a vehicle or pedestrian. The street lamp turns on at full brightness only when both conditions are met — dark environment and object detected — making it energy efficient by avoiding unnecessary illumination.

**Key behaviors:**
- Daytime → Street lamp OFF regardless of motion
- Nighttime + No object detected → Street lamp OFF
- Nighttime + Object detected → Street lamp ON at full brightness

---

## 🧰 Components

| Component | Specification | Quantity |
|---|---|---|
| Arduino UNO | ATmega328P microcontroller | 1 |
| LDR Module | Digital output, with onboard potentiometer | 1 |
| IR Sensor Module | Digital output, adjustable sensitivity | 1 |
| LED | 3V, used as street lamp | 2 |
| Resistor | 100Ω | 1 |
| Jumper Wires | Male-to-male | As required |
| USB Cable | Data-capable, Type-B | 1 |

> The two LEDs are wired in **parallel** and share a single power supply line from the Arduino.

---

## 🔌 Circuit Connections

### LDR Module
| LDR Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| DO | D2 |

### IR Sensor Module
| IR Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| OUT | D3 |

### LED Street Lamps
| LED Wire | Arduino Pin |
|---|---|
| Positive (+) | D8 (via 100Ω resistor) |
| Negative (−) | GND |

> **Note:** D8 is used instead of a PWM pin to ensure a true LOW signal (zero voltage) when the lamp is off, preventing residual glow through the LEDs.

---

## 📸 Demo / Media

LinkedIn demo video:

```markdown
[Watch Demo on LinkedIn](https://www.linkedin.com/posts/nakulvasudev_arduino-embeddedsystems-iot-activity-7453094730017558528-Iric?utm_source=share&utm_medium=member_desktop&rcm=ACoAAF4fPBQBxRsU1KFz2klCBKo9-C0-QrIRwnQ)
```

---

## 👤 Author

**Nakul**
BTech Student — SRM Institute of Science and Technology <br>
[GitHub](https://github.com/nakul28062007)

---
