#!/bin/bash

for files in ../Idl/*.idl;
do
~/RTI/ndds.5.1.0/scripts/rtiddsgen -language C++ -replace -namespace -stringSize 255 -sequenceSize 100 -d ../Source/Cpp/Generated/ -inputIdl $files
done
