#include "kosmos200.hpp"

Kosmos200::Kosmos200(){
    led_remote_rx = new DT_LED_SIMPLE_INSTANCE();
}

Kosmos200::~Kosmos200() {
    delete led_remote_rx;
}