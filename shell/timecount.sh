time=$((5*30))
while [ $time -ge 0 ];
 do
  echo -ne "Time Left: $time\033[0K\r"
  sleep 1
  ((time--))
done
