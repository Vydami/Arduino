#include <FastLED.h>
#define LED_PIN 4
#define NUM_LEDS 10

CRGB leds[NUM_LEDS];
void setup() {
  // put your setup code here, to run once:
FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:
leds[0] = CRGB(255,0,0);
FastLED.show();
delay(500);
leds[1] = CRGB(0,255,0);
FastLED.show();
delay(500);
leds[2] = CRGB(255,0,0);
FastLED.show();
delay(500);
leds[3] = CRGB(0,255,0);
FastLED.show();
delay(500);
leds[0] = CRGB(255,0,0);
leds[1] = CRGB(0,255,0);
leds[2]= CRGB(255,0,0);
leds[3]= CRGB(0,255,0);
FastLED.show();
}
