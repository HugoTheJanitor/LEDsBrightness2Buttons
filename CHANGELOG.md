# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Planned
- EEPROM support to save last brightness level
- Class-based code refactoring (LED, Button classes)
- Support for Arduino Uno and Arduino Nano
- Improved debounce algorithm
- PlatformIO configuration
- GitHub Actions CI/CD
- Fritzing schematic file
- Video tutorial

---

## [1.0.0] - 2026-08-08

### Added
- Initial release
- Arduino IDE implementation (BrightnessDownUpButtons.ino)
- Visual Studio Code version with headers for VSC compilation
- README with quick connection guide and parts list
- Photos and basic circuit diagrams
- Support for Arduino Mega 2560
- Button debounce with 20ms delay
- PWM brightness control (0-255 range)
- Brightness step control (5-unit increments)
- Basic Useful Notes section
- MIT License
- .gitignore file
- CONTRIBUTING.md guidelines
- CHANGELOG.md
- CODE_OF_CONDUCT.md

### Technical Details
- **LEDs:** Pins 9 and 10 (PWM capable)
- **Buttons:** Pins 2 and 3 (INPUT_PULLUP)
- **Resistors:** 220Ω for each LED
- **Board:** Arduino Mega 2560
- **Language:** C++ (with C compatibility)
- **Debounce:** Simple 20ms delay

---

## Future Versions

### Version 1.1 (Planned)
- Code refactoring with classes
- Improved debounce algorithm
- Extended documentation

### Version 2.0 (Planned)
- EEPROM support
- Multi-board support
- Advanced features (animations, sequences)

---

### Notes
- For any bug reports or feature requests, please create an [GitHub Issue](https://github.com/HugoTheJanitor/LEDsBrightness2Buttons/issues)
- See [CONTRIBUTING.md](CONTRIBUTING.md) for contribution guidelines
