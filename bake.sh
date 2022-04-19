#!/bin/bash

PROJECT_NAME="cpp-fishing"

g++ -c src/Main.cpp
g++ *.o -o build/$PROJECT_NAME
rm *.o
