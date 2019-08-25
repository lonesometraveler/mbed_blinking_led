# mbed Blinking LED

Blinking LED library. An easy way to add indicator LEDs to mbed projects.

## Usage

```c++
#include "mbed.h"
#include "BlinkingLED.h"

BlinkingLED indicator1(LED1);      // specify pin only (default frequency: 1Hz)
BlinkingLED indicator2(LED2, 10);  // specify pin and frequency

int main() {
    while (true) {}
}
```
