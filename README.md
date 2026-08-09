# LEDsBrightness2Buttons

A beginner-friendly Arduino project for controlling the brightness of two LEDs using two buttons.

This project is designed for learning Arduino basics, digital input, PWM, and button control.

---

## About

Two buttons control the brightness of two LEDs:

- **UP button** → increases brightness
- **DOWN button** → decreases brightness
- **Brightness range** → 0–255 (PWM)
- **LEDs** → controlled with PWM on pins 9 and 10

This is one of my first Arduino projects.

These projects document my learning journey with Arduino and Embedded Systems.

Feel free to use, modify, and learn from the code.

If this project helps you, a ⭐ on the repository is appreciated.

---

## Hardware

### Components

- Arduino Mega 2560
- 2x LEDs
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

- UP button → Pin 2 → other side to GND
- DOWN button → Pin 3 → other side to GND
- Buttons use `INPUT_PULLUP`

See the [Photos](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/tree/main/Photos) folder for wiring diagrams and project photos.

---

## How to Use

### Arduino IDE

1. Open Arduino IDE.
2. Open `ArduinoIDE/BrightnessDownUpButtons.ino`.
3. Select **Tools → Board → Arduino Mega 2560**.
4. Select **Tools → Port → Your COM port**.
5. Click **Upload**.

### Visual Studio Code

A Visual Studio Code version of the project is also included.

Open the `VisualStudioCode/` folder and use the Arduino extension to upload the project.

---

## How It Works

The brightness of the LEDs is controlled using **PWM (Pulse Width Modulation)**.

- `analogWrite(pin, 0)` → LED off
- `analogWrite(pin, 255)` → maximum brightness
- Values between `0` and `255` → different brightness levels

The buttons use `INPUT_PULLUP`, which means the Arduino's internal pull-up resistors are used instead of external resistors.

A short delay is also used for simple button debouncing.

```cpp
analogWrite(LED_PIN, brightness);
```

---

## Project Structure

```text
LEDsBrightness2Buttons/
│
├── ArduinoIDE/
│   └── BrightnessDownUpButtons.ino
│
├── VisualStudioCode/
│   └── BrightnessDownUpButtonsVSC/
│
├── Photos/
│   └── ...
│
├── .gitignore
├── LICENSE
└── README.md
```

---

## What I Learned

- Digital input and output (`INPUT`, `OUTPUT`, `INPUT_PULLUP`)
- PWM and `analogWrite()`
- Reading buttons with `digitalRead()`
- Simple button debouncing
- Basic program flow (`setup()`, `loop()`)
- Working with Arduino pins and a breadboard

---

## Troubleshooting

### LED doesn't light

- Check LED polarity.
- Check that the resistor is 220Ω.
- Verify the pin numbers in the code.
- Check the GND connection.

### Button doesn't work

- Check the connections to pins 2 and 3.
- Make sure the other side of each button is connected to GND.
- Check the button orientation on the breadboard.

### Code won't upload

- Make sure **Arduino Mega 2560** is selected.
- Check the USB cable.
- Check the selected COM port.
- Try another USB port.

---

## License

This project is licensed under the MIT License.

See [LICENSE](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/blob/main/LICENSE) for details.

---

Made while learning Arduino and Embedded Systems.
