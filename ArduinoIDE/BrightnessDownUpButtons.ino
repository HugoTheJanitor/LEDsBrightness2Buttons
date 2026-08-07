const int ledPin9 = 9;
const int ledPin10 = 10;

const int upButton = 2;
const int downButton = 3;

int brightness = 0;

void setup()
{
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);

  pinMode(upButton, INPUT_PULLUP);
  pinMode(downButton, INPUT_PULLUP);

  analogWrite(ledPin9, brightness);
  analogWrite(ledPin10, brightness);
}

void loop()
{
  if (digitalRead(upButton) == LOW)
  {
    brightness += 5;

    if (brightness > 255)
    {
      brightness = 255;
    }

    analogWrite(ledPin9, brightness);
    analogWrite(ledPin10, brightness);

    delay(20);
  }

  if (digitalRead(downButton) == LOW)
  {
    brightness -= 5;

    if (brightness < 0)
    {
      brightness = 0;
    }

    analogWrite(ledPin9, brightness);
    analogWrite(ledPin10, brightness);

    delay(20);
  }
}
