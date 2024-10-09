/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include "C:\Users\Ruben\kosmos200\hubelectronics-library\common\atomic_pwm.hpp" //TODO: esta ruta no ha de poder depender de ruben ya que ha de ser comun para todos

LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

Kosmos200 *kosmos200;

int main() {
  kosmos200 = new Kosmos200();
  //pcontroller->start();
  delete kosmos200;
  return 0;
}

