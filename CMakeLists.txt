# Copyright (c) 2021 Nordic Semiconductor ASA
# SPDX-License-Identifier: Apache-2.0
#
# This CMake file is picked by the Zephyr build system because it is defined
# as the module CMake entry point (see zephyr/module.yml).


# This is needed so that custom driver classes using system calls are taken into
# account
#TODO: this should be uncommented and fixed zephyr_syscall_include_directories(include)

zephyr_include_directories(include)
zephyr_include_directories(../)
zephyr_include_directories(../hubelectronics-library)
zephyr_include_directories(application/.)
zephyr_library_sources(application/kosmos200.cpp)

add_subdirectory(drivers)
add_subdirectory(lib)
