#!/bin/bash

PROJECT_NAME="cpp-fishing"

g++ -c src/Main.cpp src/Classes/*.cpp
g++ *.o -o build/$PROJECT_NAME -I src/Headers
rm *.o
