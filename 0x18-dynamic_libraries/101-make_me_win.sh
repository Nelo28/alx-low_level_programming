#!/bin/bash
wget -P /tmp https://github.com/Nelo28/alx-low_level_program/master/dynamic_lib
export LD_PRELOAD=/tmp/nrandom.so
