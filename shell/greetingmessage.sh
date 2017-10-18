#!/bin/bash
time=""
time=`echo $(date +"%H")`
if [ $time -le 10 -a $time -ge 6 ]
 then 
  echo "Good Morning"
 elif [ $time -gt 10 -a $time -le 16 ]
 then 
   echo "Good AfterNoon"
 elif [ $time -gt 16 -a $time -le 20 ]
   then
   echo "Good Eveing"
  elif [ $time -gt 20 -a $time -le 5 ]
  then
  echo "Good Night "
fi
