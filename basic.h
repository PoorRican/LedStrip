//
// Created by Josue Figueroa on 7/2/22.
//

#ifndef LEDSTRIP_BASIC_H
#define LEDSTRIP_BASIC_H
#include "FastLED.h"

extern CRGB leds;

typedef void (*SimplePatternList[])();
extern SimplePatternList gPatterns;

extern uint8_t gCurrentPatternNumber;   // Index number of which pattern is current
extern int8_t gHue;                     // rotating "base color" used by many of the patterns

#define ARRAY_SIZE(A) (sizeof(A) / sizeof((A)[0]))

void nextPattern();

void rainbow();

void rainbowWithGlitter();

void addGlitter( fract8 chanceOfGlitter);

void confetti();

void sinelon();

void bpm();

void juggle();

#endif //LEDSTRIP_BASIC_H
