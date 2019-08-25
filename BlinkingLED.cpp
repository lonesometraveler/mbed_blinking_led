/**
 * @file BlinkingLED.cpp
 */

#include "BlinkingLED.h"

BlinkingLED::BlinkingLED(PinName led, uint32_t frequency) : _led(led) {
    setting.time = 1.0f / frequency;
    t.attach(callback(this, &BlinkingLED::flip), setting.time);
}

void BlinkingLED::flip(void) {
    _led = !_led;
}
