# LEDsBrightness2Buttons

Simple Arduino project for controlling the brightness of two LEDs using two buttons.

Perfect for learning Arduino basics: digital input, PWM, and how to handle button presses.

---

## About

Two buttons control the brightness of two LEDs:
- **UP button** → increases brightness
- **DOWN button** → decreases brightness  
- **Range** → 0 to 255 (PWM)
- **LEDs** → controlled with PWM on pins 9 and 10

This is one of my first Arduino projects. Feel free to use it, modify it, and learn from the code!

If it helps you, a ⭐ is appreciated.

---

## Hardware

### Components

- Arduino Mega 2560
- 2x LEDs (any color)
- 2x 220Ω resistors
- 2x push buttons
- Breadboard
- Jumper wires
- USB cable

### Wiring

**LEDs:**
- LED 1 → 220Ω resistor → Pin 9 (PWM) → Cathode to GND
- LED 2 → 220Ω resistor → Pin 10 (PWM) → Cathode to GND

**Buttons:**
- UP button → Pin 2, other side to GND (uses INPUT_PULLUP)
- DOWN button → Pin 3, other side to GND (uses INPUT_PULLUP)

See [Photos/](Photos/) for wiring diagrams.

---

## How to Use

### Arduino IDE

1. Open Arduino IDE
2. Open `ArduinoIDE/BrightnessDownUpButtons.ino`
3. Select **Tools → Board → Arduino Mega 2560**
4. Select **Tools → Port → Your COM port**
5. Click **Upload**

### Visual Studio Code

1. Open the `VisualStudioCode/` folder
2. Install Arduino extension
3. Upload with Ctrl+Alt+U

---

## How It Works

- **PWM (Pulse Width Modulation)** → Controls brightness by rapidly turning LED on/off
- **analogWrite(pin, 0-255)** → Sets brightness level
- **INPUT_PULLUP** → Uses internal resistor on button pins (no external needed)
- **Simple debounce** → 20ms delay to prevent false button presses

```cpp
analogWrite(LED_PIN, brightness);  // 0 = off, 255 = full brightness
```

---

## Project Structure

```
LEDsBrightness2Buttons/
│
├── README.md                          # This file
├── LICENSE                            # MIT License
│
├── ArduinoIDE/
│   └── BrightnessDownUpButtons.ino    # Main code
│
├── VisualStudioCode/
│   └── BrightnessDownUpButtonsVSC/    # VSC version
│
└── Photos/                            # Wiring and assembly guides
```

---

## What I Learned

✅ Digital input and output (INPUT, OUTPUT, INPUT_PULLUP)  
✅ PWM and `analogWrite()`  
✅ Reading buttons with `digitalRead()`  
✅ Simple debouncing  
✅ Basic program flow (setup, loop)  
✅ Working with pins and breadboard  

---

## Troubleshooting

**LED doesn't light:**
- Check LED polarity (+ to resistor, - to GND)
- Check resistor value (220Ω)
- Verify pin numbers in code

**Button doesn't work:**
- Check connections to pins 2 and 3
- Verify button pin goes to GND
- Test with multimeter

**Code won't upload:**
- Verify board is set to "Arduino Mega 2560"
- Check USB cable and COM port
- Try a different USB port

---

## License

MIT License - Use, modify, and share freely!

See [LICENSE](LICENSE) for details.

---

Made with ❤️ while learning Arduino.

Questions? Open an [Issue](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/issues)!
