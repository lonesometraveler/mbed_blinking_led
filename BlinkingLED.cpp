/**
 * @file BlinkingLED.cpp
 */

#include "BlinkingLED.h"

BlinkingLED::BlinkingLED(PinName led, uint32_t frequency) : _led(led) {
    setting.time = 1.0f / frequency;
}

void BlinkingLED::start(void) {
	t.attach(callback(this, &BlinkingLED::flip), setting.time);
}

void BlinkingLED::stop(void) {
	_led = 0;
	t.detach();
}

void BlinkingLED::flip(void) {
    _led = !_led;
}
