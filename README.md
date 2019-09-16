# mbed Blinking LED

Blinking LED library. An easy way to add indicator LEDs to mbed projects.

## Usage

```c++
#include "mbed.h"
#include "BlinkingLED.h"

BlinkingLED led1(LED1);       // specify pin only (default frequency: 1Hz)
BlinkingLED led2(LED2, 10);   // specify pin and frequency

int main() {
    led1.start();
    led2.start();
    wait(5);
    led1.stop();
    led2.stop();
    wait(5);
    led1.start();
    led2.start();
    while (1) {}
}
```
