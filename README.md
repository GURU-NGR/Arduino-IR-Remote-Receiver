# Arduino-IR-Remote-Receiver

Arduino project to receive and decode IR remote signals. Prints button codes to the Serial Monitor for later use in controlling devices like LEDs, motors, or other electronics.

---

## 📦 Features

- Reads IR signals from any standard IR remote.
- Displays button codes in hexadecimal format on the Serial Monitor.
- Simple and easy-to-understand Arduino code.
- Can be extended to control LEDs, motors, or other devices based on remote input.

---

## 🔧 Hardware Requirements

- Arduino Uno (or any compatible Arduino board)
- IR Receiver Module 
- Jumper wires
- USB cable to connect Arduino to PC
- IR Remote Control

---

## 📌 Wiring

| IR Receiver Pin | Arduino Pin |
|-----------------|-------------|
| VCC             | 5V          |
| GND             | GND         |
| OUT             | D8          |

---

## 📝 Installation

1. Install the **IRremote** library in the Arduino IDE:
   - Go to **Sketch → Include Library → Manage Libraries…**
   - Search for `IRremote` and install the latest version.

2. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/Arduino-IR-Remote-Receiver.git
