#!/bin/bash
wget -q --output-document=$HOME/lib101-makemewin.so https://github.com/richie-omondi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib101-makemewin.so
export LD_PRELOAD=$HOME/lib101-makemewin.so
