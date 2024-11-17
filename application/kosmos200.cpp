#include "kosmos200.hpp"

Kosmos200::Kosmos200(){
    //led_remote_rx = new DT_LED_SIMPLE_INSTANCE(led_remote_rx);


    const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_PATH(led_remote_rx), enable_gpios);

    led_remote_rx = new LedSimple(led);
}

Kosmos200::~Kosmos200() {
   delete led_remote_rx;
}