#!/bin/bash

source ../common.sh

set -e

g++ -std=c++17 -o 01 01.cpp

ANSWER=11
cat example01.txt | ./01
TEST=$(cat example01.txt | ./01 | grep 'ANSWER' | awk '{print $2}')

validateNumber "$TEST" "$ANSWER"


cat input.txt | ./01

g++ -std=c++17 -o 02 02.cpp

ANSWER=31

cat example01.txt | ./02
TEST=$(cat example01.txt | ./02)

validateNumber $TEST $ANSWER

cat input.txt | ./02
