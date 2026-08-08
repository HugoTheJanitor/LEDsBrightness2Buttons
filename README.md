# LEDsBrightness2Buttons

Arduino project: controlling the brightness of two LEDs using two buttons (increase/decrease).

## Description
- **Language:** C++ / C
- **Simple circuit:** 2 LEDs, 2 buttons
- **Uses:** Internal pull-up resistors on buttons (INPUT_PULLUP)
- **Board:** Arduino Mega 2560

## Files in the Repository
- **Arduino IDE** (original version): [BrightnessDownUpButtons.ino](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/blob/main/ArduinoIDE/BrightnessDownUpButtons.ino)
- **Visual Studio Code** (adapted version): [BrightnessDownUpButtonsVSC](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/blob/main/VisualStudioCode/BrightnessDownUpButtonsVSC)
- **Photos & Guide:** [Photos/Guide](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/blob/main/Photos/Guide)
- **Additional images:** [ComponentsNeeded.png](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/blob/main/Photos/ComponentsNeeded.png), [HowToBuild.png](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/blob/main/Photos/HowToBuild.png)

## Quick Connection Guide

### 1. Board
**Arduino Mega 2560** — all standard digital and PWM pins are compatible with this project.

### 2. LEDs (Light Emitting Diodes)
- Use **220Ω current-limiting resistors** — one resistor per LED
- **Connection:**
  - LED anode → resistor → digital PWM pin (pins 9 and 10 in this project)
  - LED cathode → GND (common ground)

### 3. Buttons
- Two buttons connected to digital input pins with internal pull-up (INPUT_PULLUP)
- **Connection:**
  - One button contact → digital pin (pins 2 and 3 in this project)
  - Other button contact → GND
  - **Note:** Since INPUT_PULLUP is used in the code, external pull-up resistors are NOT needed

### 4. Power Supply
- Connect the board to your computer via USB, or use an external 5V power supply as per your board's specifications

## What You Need (Quick Parts List)
- **LEDs:** 2 resistors (220Ω), 2 wires from pins to resistors, common GND wire
- **Buttons:** 2 push buttons, 4 wires total (pin + GND connections, can share common GND rail)
- **Wiring:** Approximately 5–6 wires minimum, but typical breadboard setup uses 8–10 for cleaner connections

## How to Use

1. **Arduino IDE:** Upload the file `ArduinoIDE/BrightnessDownUpButtons.ino` using Arduino IDE. Select your board (Arduino Mega 2560), choose the correct COM port, and upload.

2. **Visual Studio Code:** Use the file `VisualStudioCode/BrightnessDownUpButtonsVSC` (same logic, includes headers for VSC compilation).

3. **Button Behavior:**
   - Press the **"Up"** button (pin 2) to increase brightness in steps of 5 (maximum 255)
   - Press the **"Down"** button (pin 3) to decrease brightness in steps of 5 (minimum 0)

## Useful Notes
- The code uses a simple 20 ms delay after each button press for basic debouncing. For more reliable behavior, consider implementing a more robust debounce algorithm.
- Pins 9 and 10 support hardware PWM on most Arduino boards, including Mega 2560. Verify that you're using PWM-capable pins.
- If using a different board, check the pin documentation for PWM-compatible pins.

## Additional Options
- Step-by-step wiring diagrams (from /Photos) can be added to this README
- This README is now in English
- PlatformIO setup or Fritzing schematic examples can be prepared if needed

---

**Author:** HugoTheJanitor
