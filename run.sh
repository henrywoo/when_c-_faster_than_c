#!/bin/bash

cc myc.c -O3 -o myc
g++ mycpp.cpp -std=c++1z -O3 -o mycpp

#sudo perf stat ./myc
#sudo perf stat ./mycpp

