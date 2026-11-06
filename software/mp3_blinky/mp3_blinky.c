#include <stdio.h>
#include "pico/stdlib.h"

#define LED_PIN 25

int main()
{
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        gpio_put(LED_PIN, !gpio_get(LED_PIN));
        sleep_ms(1000);
    }
}
