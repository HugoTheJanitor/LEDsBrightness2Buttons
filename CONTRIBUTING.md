# Contributing to LEDsBrightness2Buttons

Thank you for your interest in contributing to this project! Here are some guidelines to help you get started.

## How to Contribute

### 1. Fork the Repository
Click the "Fork" button at the top right of this repository to create your own copy.

### 2. Clone Your Fork
```bash
git clone https://github.com/YOUR-USERNAME/LEDsBrightness2Buttons.git
cd LEDsBrightness2Buttons
```

### 3. Create a Branch
```bash
git checkout -b feature/your-feature-name
```

Use clear branch names like:
- `feature/add-eeprom-support`
- `fix/debounce-issue`
- `docs/improve-guide`

### 4. Make Your Changes
- Keep changes focused and minimal
- Follow the existing code style
- Add comments for complex logic
- Test your changes thoroughly

### 5. Commit Your Changes
```bash
git commit -m "Clear description of what you changed"
```

Use meaningful commit messages:
- ❌ Bad: "fixed stuff"
- ✅ Good: "Improve debounce algorithm for button presses"

### 6. Push to Your Fork
```bash
git push origin feature/your-feature-name
```

### 7. Create a Pull Request (PR)
Go to the original repository and click "Compare & pull request". In your PR description, explain:
- What changes you made
- Why these changes are needed
- Any testing you performed

---

## Code Style Guide

### C++ / Arduino Code
```cpp
// ✅ Good: Clear variable names and comments
const int LED_PIN_1 = 9;      // PWM pin for LED 1
const int BUTTON_UP = 2;      // Button to increase brightness
const int STEP_SIZE = 5;      // Brightness increment

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(BUTTON_UP, INPUT_PULLUP);
}

// ❌ Bad: Unclear naming and no comments
const int p = 9;
const int b = 2;
void setup() {
  pinMode(p, OUTPUT);
}
```

### Naming Conventions
- **Constants:** `UPPER_CASE_WITH_UNDERSCORES`
- **Variables:** `camelCase`
- **Functions:** `camelCase()`
- **Classes:** `PascalCase`

---

## Types of Contributions Welcome

### 🐛 Bug Reports
Found an issue? Create a GitHub issue with:
- Clear description of the problem
- Steps to reproduce
- Expected vs. actual behavior
- Your hardware setup (board, components)

### 📚 Documentation
- Improve README.md
- Expand the Guide
- Add code comments
- Fix typos and grammar

### ✨ Features
- Improved debounce algorithms
- EEPROM support for saving brightness
- Support for other Arduino boards
- Additional examples

### 📸 Media
- Better circuit diagrams
- Tutorial videos or GIFs
- Component photos
- Wiring documentation

---

## Testing Your Changes

Before submitting a PR:
1. **Verify on Hardware:** Test on Arduino Mega 2560 (or your board)
2. **Check for Syntax Errors:** Use Arduino IDE or PlatformIO
3. **Test Edge Cases:**
   - Maximum brightness (255)
   - Minimum brightness (0)
   - Rapid button presses
   - Long button holds

### Example Test Checklist
- [ ] LEDs turn on/off correctly
- [ ] Brightness increases with Up button
- [ ] Brightness decreases with Down button
- [ ] Steps of 5 are applied correctly
- [ ] No crashes on rapid clicks
- [ ] Code compiles without errors

---

## Pull Request Checklist

Before submitting your PR, ensure:
- [ ] Your code follows the style guide
- [ ] You've tested changes on hardware
- [ ] You've added comments to complex code
- [ ] PR description explains what you changed
- [ ] No unrelated files are committed
- [ ] Commit history is clean (consider squashing)

---

## Questions or Need Help?

1. **Check existing issues** - Your question might already be answered
2. **Create a new issue** - Clearly describe what you need help with
3. **Contact the maintainer** - Reach out with questions

---

## License

By contributing, you agree that your contributions will be licensed under the same MIT License as this project.

---

Thank you for helping make this project better! 🚀
