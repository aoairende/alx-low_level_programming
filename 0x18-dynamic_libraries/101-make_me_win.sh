#!/bin/bash
wget -P .. https://raw.githubusercontent.com/aoairende/alx-low_level_programming/7a570cea3404488c3a0d384905dd36da07e48137/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
