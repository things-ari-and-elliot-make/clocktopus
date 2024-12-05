#include <FastLED.h>
#define LED_PIN     33
#define NUM_LEDS    12
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void setLedColour(int ledNumber, float price=999) {
  if(price == 999) {
    leds[ledNumber] = CRGB (255, 255, 255);
    FastLED.show();
  }
  else if(price > 0.25) {
    leds[ledNumber] = CRGB (255, 0, 0);
    FastLED.show();
  } else if(price > 0.15) {
    leds[ledNumber] = CRGB (255, 255, 0);
    FastLED.show();
  } else {
    leds[ledNumber] = CRGB (0, 255, 0);
    FastLED.show();
  }
}


void loop() {
setLedColour(0, 999);
setLedColour(1, 0.3);
setLedColour(2, 0.2);
setLedColour(3, 0.1);
  delay(40);



  // for (int i = 0; i <= (NUM_LEDS - 1); i++) {
  //   leds[i] = CRGB ( 0, 0, 255);
  //   FastLED.show();
  //   delay(40);
  // }
  // for (int i = (NUM_LEDS - 1); i >= 0; i--) {
  //   leds[i] = CRGB ( 255, 0, 0);
  //   FastLED.show();
  //   delay(40);
  // }
  //  for (int i = 0; i <= (NUM_LEDS - 1); i++) {
  //   leds[i] = CRGB ( 0, 255, 0);
  //   FastLED.show();
  //   delay(40);
  // }
}


{
    24/12/4-1AM: 0.24
}