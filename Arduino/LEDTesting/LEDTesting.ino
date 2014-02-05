#include <Adafruit_NeoPixel.h>

#define PIN 6

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(30, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() 
{
  pinMode(0, INPUT);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off' 
}

void loop() 
{
  // start actual LED logic below
  if(digitalRead(0)==LOW)
  {
    for(int i = 15; i>=0; i--)
    {
      int temp = (15-i)+15;
      strip.setPixelColor(i, 150, 150, 0);
      strip.setPixelColor(temp, 150, 150, 0);
      strip.show();
      delay(50);
    }
    for(int i = 0; i<=30; i++)
    {
      strip.setPixelColor(i,0,0,0);
      strip.show();
    }
  }
  else
  {
    for(int i = 15; i>=0; i--)
    {
      int temp = (15-i)+15;
      strip.setPixelColor(i, 255, 0, 0);
      strip.setPixelColor(temp, 255, 150, 0);
      strip.show();
      delay(50);
    }
    for(int i = 0; i<=30; i++)
    {
      strip.setPixelColor(i,0,0,0);
      strip.show();
    }
  }
}
