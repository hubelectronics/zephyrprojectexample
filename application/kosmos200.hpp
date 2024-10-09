#ifndef _HUBELECTRONICS_KOSMOS200_APPLICATION_HPP_
#define _HUBELECTRONICS_KOSMOS200_APPLICATION_HPP_

#include "hubelectronics-library/common/atomic_pwm.hpp"
#include "hubelectronics-library/led_simple/led_simple.hpp"

class Kosmos200{

	 LedSimple *led_remote_rx;

public:
    Kosmos200();
    ~Kosmos200(); 

};

#endif