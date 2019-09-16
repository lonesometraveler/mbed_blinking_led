/**
 * @file BlinkingLED.h
 * @brief indicator LED class
 *
 */

#ifndef BLINKING_LED_H
#define BLINKING_LED_H

#include "mbed.h"

class BlinkingLED {

public:
    /**
     * @brief constructor.
     * @param PinName for LED.
     * @param led flip frequency. default: 1hz
     */
    BlinkingLED(PinName led, uint32_t freqency = 1);

    /**
     * @brief start blinking LED.
     */
    void start(void);

    /**
     * @brief stop blinking LED.
     */
    void stop(void);

private:
    Ticker t;
    DigitalOut _led;

    /**
     * @brief setting struct
     */
    typedef struct setting_s {
        float time;
    } setting_s;

    setting_s setting;

    /**
     * @brief flips LED.
     */
    void flip(void);
};

#endif
