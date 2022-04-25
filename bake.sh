#!/bin/bash

PROJECT_NAME="cpp-fishing"

g++ -c src/Main.cpp src/Classes/*.cpp
mkdir -p build
g++ *.o -o build/$PROJECT_NAME -I src/Headers
rm *.o
