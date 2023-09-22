#!/bin/bash
wget -P /tmp https://github.com/aleksifuna/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib_puts.so
export LD_PRELOAD=/tmp/lib_puts.so
