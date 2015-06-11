#!/bin/bash

for files in ../Idl/*.idl;
do
~/Development/DDS/RTI/ndds.5.1.0/scripts/rtiddsgen -language java -replace -package TelebotDDSCore.Source.Java.Generated -stringSize 255 -sequenceSize 100 -d ../../ -inputIdl $files
done
