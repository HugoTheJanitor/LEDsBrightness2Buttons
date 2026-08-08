# LEDsBrightness2Buttons

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Made with Arduino](https://img.shields.io/badge/Made%20with-Arduino-00979D?logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-blue)](https://en.cppreference.com/)

> A beginner-friendly Arduino project for controlling LED brightness using two buttons. Perfect for learning Arduino basics, PWM, and digital input handling.

---

## 📋 Table of Contents

- [Description](#description)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Quick Start](#quick-start)
- [Project Structure](#project-structure)
- [How It Works](#how-it-works)
- [Troubleshooting](#troubleshooting)
- [Future Enhancements](#future-enhancements)
- [Contributing](#contributing)
- [License](#license)

---

## 📝 Description

This project demonstrates how to:
- Control LED brightness using PWM (Pulse Width Modulation)
- Handle button inputs with internal pull-up resistors
- Implement basic debouncing
- Write modular Arduino code

**Target Audience:** Arduino beginners who want to understand I/O handling and PWM control.

- **Language:** C++ / C
- **Board:** Arduino Mega 2560 (compatible with Uno, Nano with pin adjustments)
- **Complexity:** ⭐ Beginner
- **Time to Build:** 15-30 minutes

---

## ✨ Features

✅ **Simple Circuit:** Just 2 LEDs, 2 buttons, and resistors  
✅ **PWM Brightness Control:** Smooth brightness adjustment (0-255 range)  
✅ **Internal Pull-ups:** No external resistors needed for buttons  
✅ **Debounce Logic:** Built-in 20ms delay for stable operation  
✅ **Step Control:** Brightness changes in 5-unit increments  
✅ **Dual Environment:** Works in Arduino IDE and Visual Studio Code  

---

## 🔧 Hardware Requirements

### Components Needed

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Mega 2560 | 1 | Any Arduino with PWM pins works |
| LEDs (any color) | 2 | Red/Green/Yellow recommended |
| Resistors (220Ω) | 2 | Current limiting for LEDs |
| Push Buttons | 2 | Any momentary switch |
| Breadboard | 1 | For easy connections |
| Jumper Wires | ~10 | Various colors recommended |
| USB Cable | 1 | For programming |

### Optional
- External 5V power supply (instead of USB)
- Multimeter (for troubleshooting)

---

## 🚀 Quick Start

### 1. Hardware Setup

#### LED Connections
```
LED 1:
  - Resistor 220Ω → Pin 9 (PWM) → Breadboard
  - Anode (+) → Through resistor
  - Cathode (-) → GND

LED 2:
  - Resistor 220Ω → Pin 10 (PWM) → Breadboard
  - Anode (+) → Through resistor
  - Cathode (-) → GND
```

#### Button Connections
```
Button UP (Pin 2):
  - One pin → Pin 2 (INPUT_PULLUP)
  - Other pin → GND

Button DOWN (Pin 3):
  - One pin → Pin 3 (INPUT_PULLUP)
  - Other pin → GND
```

**💡 Tip:** See [Photos/Guide](Photos/Guide) for visual wiring diagrams.

### 2. Upload Code

**Option A: Arduino IDE**
1. Open Arduino IDE
2. Go to File → Open → `ArduinoIDE/BrightnessDownUpButtons.ino`
3. Select Tools → Board → Arduino Mega 2560
4. Select Tools → Port → Your COM port
5. Click Upload ↑

**Option B: Visual Studio Code**
1. Install Arduino extension
2. Open `VisualStudioCode/BrightnessDownUpButtonsVSC`
3. Press Ctrl+Alt+U to upload

### 3. Test It!

```
Button Behavior:
- Press UP button (Pin 2) → Brightness increases by 5 (max 255)
- Press DOWN button (Pin 3) → Brightness decreases by 5 (min 0)
```

---

## 📁 Project Structure

```
LEDsBrightness2Buttons/
│
├── README.md                          # This file
├── LICENSE                            # MIT License
├── CONTRIBUTING.md                    # How to contribute
├── CODE_OF_CONDUCT.md                 # Community guidelines
├── CHANGELOG.md                       # Version history
│
├── ArduinoIDE/
│   └── BrightnessDownUpButtons.ino    # Main sketch for Arduino IDE
│
├── VisualStudioCode/
│   └── BrightnessDownUpButtonsVSC/    # VSC compatible version
│
└── Photos/
    ├── Guide/                         # Step-by-step assembly guide
    ├── ComponentsNeeded.png           # Parts list with images
    ├── HowToBuild.png                 # Assembly instructions
    └── CircuitDiagram.png             # Wiring diagram
```

---

## 🔬 How It Works

### PWM (Pulse Width Modulation)
The code uses PWM to control LED brightness by rapidly turning the LED on and off. The ratio of on-time to off-time determines perceived brightness.

```cpp
analogWrite(LED_PIN, brightness);  // 0 (off) to 255 (full brightness)
```

### Button Debounce
Buttons can generate multiple signals during one press. We use a simple 20ms delay to stabilize the signal.

```cpp
if (digitalRead(BUTTON_UP) == LOW) {
  delay(20);  // Simple debounce
  if (brightness < 255) brightness += STEP;
}
```

### INPUT_PULLUP
Internal pull-up resistors keep the button pin HIGH when unpressed, and LOW when pressed (connected to GND).

```cpp
pinMode(BUTTON_UP, INPUT_PULLUP);
```

---

## 🐛 Troubleshooting

### ❌ LED doesn't light up
- **Check 1:** Verify LED polarity (+ to resistor, - to GND)
- **Check 2:** Test with multimeter across LED terminals
- **Check 3:** Try a different LED (may be broken)
- **Check 4:** Check resistor value (should be 220Ω)

### ❌ Button doesn't work
- **Check 1:** Verify button connections to pins 2 & 3
- **Check 2:** Ensure one pin goes to GND
- **Check 3:** Test button with multimeter (should beep when pressed)
- **Check 4:** Swap button to test with different pin

### ❌ Code won't upload
- **Check 1:** Verify correct board selected (Arduino Mega 2560)
- **Check 2:** Confirm USB cable is connected
- **Check 3:** Select correct COM port under Tools → Port
- **Check 4:** Try different USB port on computer

### ❌ Brightness changes erratically
- **Check 1:** Hold button longer (20ms debounce delay)
- **Check 2:** Reduce USB cable length (interference)
- **Check 3:** Check for loose wire connections

---

## 🚦 LED Status Guide

| LED State | Meaning |
|-----------|---------|
| Off | Brightness = 0 |
| Dim | Brightness = 0-85 (dark) |
| Medium | Brightness = 85-170 (medium) |
| Bright | Brightness = 170-255 (bright) |

---

## 📚 Learning Resources

### Arduino Concepts Covered
- Digital I/O (INPUT, OUTPUT, INPUT_PULLUP)
- PWM and `analogWrite()`
- Button debouncing
- Basic program flow (setup, loop)

### External Resources
- [Arduino PWM Tutorial](https://www.arduino.cc/en/Tutorial/PWM)
- [Arduino digitalRead()](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/)
- [Debouncing Techniques](https://www.arduino.cc/en/tutorial/debounce)

---

## 🎯 Future Enhancements

We have plans to expand this project! See [CHANGELOG.md](CHANGELOG.md):

- ✏️ **Improved Debounce:** State machine-based debouncing
- 🔋 **EEPROM Support:** Remember last brightness level after power cycle
- 🎮 **More Boards:** Arduino Uno, Nano, STM32 support
- 🎨 **RGB LEDs:** Color control with 3+ buttons
- 🔊 **Sound Feedback:** Buzzer notification on button press
- 📊 **Simulation:** Wokwi circuit simulator integration

---

## 🤝 Contributing

We welcome contributions from everyone! Whether it's:
- 🐛 Bug reports
- 📚 Documentation improvements
- ✨ New features
- 📸 Better diagrams/videos

Please see [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines.

### Quick Contribution Steps
1. Fork this repository
2. Create a feature branch: `git checkout -b feature/my-feature`
3. Make your changes and test thoroughly
4. Commit: `git commit -m "Add my feature"`
5. Push: `git push origin feature/my-feature`
6. Create a Pull Request

---

## 📜 License

This project is licensed under the **MIT License** - see [LICENSE](LICENSE) file for details.

**You are free to:**
- ✅ Use in commercial projects
- ✅ Modify the code
- ✅ Distribute
- ✅ Use privately

**Conditions:**
- 📝 Include the license and copyright notice
- ⚠️ The software is provided "as-is" without warranty

---

## 👤 Author

**HugoTheJanitor**  
🔗 GitHub: [@HugoTheJanitor](https://github.com/HugoTheJanitor)

---

## 📞 Support & Questions

- 💬 **Issues:** [Create a GitHub Issue](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/issues)
- 📖 **Documentation:** Check [CONTRIBUTING.md](CONTRIBUTING.md)
- 🤝 **Code of Conduct:** See [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md)

---

**⭐ If this project helped you, please consider giving it a star!** ⭐

Happy coding! 🚀
