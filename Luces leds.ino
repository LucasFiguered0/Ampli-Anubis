#include <FastLED.h>
#define NUM_LEDS 82
#define DATA_PIN 6
#define CLOCK_PIN 13
#define BRIGHTNESS 255
//////////////////////////////////////////////////////////////////////////////////
CRGB leds[NUM_LEDS];
//////////////////////////////////////////////////////////////////////////////////
const int buttonPin3 = 2;
int buttonState3 = 0;
const int buttonPin2 = 3;
int buttonState2 = 0;
const int buttonPin1 = 4;
int buttonState1 = 0;

int s = 0;
////////////////////////////////////////////////////////////////////////////////7

void setup() {
  Serial.begin(57600);
  Serial.println("resetting");
  LEDS.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  LEDS.setBrightness(255);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(A0, INPUT);
}
/////////////////////////////////////////////////////////////////////////
void fadeall() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i].nscale8(250);
  }
}
//////////////////////////////////////////////////////////////////////////
void loop() {
  buttonState3 = digitalRead(buttonPin3);
  buttonState2 = digitalRead(buttonPin2);
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 == HIGH && buttonState2 == LOW && buttonState3 == LOW) {
    modo();
  }
  else if (buttonState2 == HIGH && buttonState1 == LOW && buttonState1 == LOW) {
    modoo();
  }
  else if (buttonState3 == HIGH && buttonState2 == LOW && buttonState1 == LOW) {
    modooo();
  }
  else {
    int i = 0;
    for (i = 0; i < NUM_LEDS; i++) {
      leds[i] = CRGB::Black;
      FastLED.show();
    }
  }
}
///////////////////////////////////////////////////////////////////////////
void modo() {
  static uint8_t hue = 0;
  Serial.print("x");
  // First slide the led in one direction
  for (int i = 0; i < NUM_LEDS; i++) {
    // Set the i'th led to red
    leds[i] = CHSV(hue++, 255, 255);
    // Show the leds
    FastLED.show();
    // now that we've shown the leds, reset the i'th led to black
    // leds[i] = CRGB::Black;
    fadeall();
    // Wait a little bit before we loop around and do it again
    delay(10);
  }
  Serial.print("x");

  // Now go in the other direction.
  for (int i = (NUM_LEDS) - 1; i >= 0; i--) {
    // Set the i'th led to red
    leds[i] = CHSV(hue++, 255, 255);
    // Show the leds
    FastLED.show();
    // now that we've shown the leds, reset the i'th led to black
    // leds[i] = CRGB::Black;
    fadeall();
    // Wait a little bit before we loop around and do it again
    delay(10);
  }

}
///////////////////////////////////////////////////////////////////////////////////////////
void modoo() {
  int i = 0;
  for (i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Yellow;
    delay(15);
    FastLED.show();
    fadeall();
  }
}
///////////////////////////////////////////////////////////////////////////////////////////
void modooo() {
  int r = 150;
  int g = 170;
  int b = 0;


  s = analogRead(A0);
  s = s * 2;
  // Serial.println(s);
  // delay(50);
  if ((s >= 450) && (s <= 550))
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB (0, 0, 255);
    leds[NUM_LEDS / 2] = CRGB (0, 0, 255);
  }
  else if ((s >= 400) && (s <= 450))
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB (153, 153, 0);
    leds[NUM_LEDS / 2] = CRGB (153, 153, 0);
  }
  else if ((s >= 350) && (s <= 400))
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB (255, 50, 255);
    leds[NUM_LEDS / 2] = CRGB (255, 50, 255);
  }
  else if ((s >= 300) && (s <= 350))
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB (10, 25, 217);
    leds[NUM_LEDS / 2] = CRGB (10, 25, 217);
  }

  else if ((s >= 276) && (s <= 300))
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB (50, 50, 150);
    leds[NUM_LEDS / 2] = CRGB (50, 50, 150);
  }
  else if ((s >= 250) && (s <= 275))
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB (230, 0, 10);
    leds[NUM_LEDS / 2] = CRGB (230, 0, 10);
  }
  else if ((s >= 235) && (s <= 250))
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB (0, 160, 0);
    leds[NUM_LEDS / 2] = CRGB (0, 160, 0);
  }
  else if ((s >= 200) && (s <= 230))
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB (1, 0, 1);
    leds[NUM_LEDS / 2] = CRGB (1, 0, 1);
  }
  else
  {
    leds[(NUM_LEDS / 2) - 1] = CRGB ( r, s - 100, b);
    leds[NUM_LEDS / 2] = CRGB ( r, s - 100, b);
  }
  for (int i = 0; i <= ((NUM_LEDS / 2) - 2); i++)
  {
    leds[i] = leds[i + 1];
    leds[NUM_LEDS - 1 - i] = leds[(NUM_LEDS) - i - 2];

  }
  FastLED.show();
  delay(25);
  fadeall();
}
