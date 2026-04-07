#!/usr/bin/env bash

read -p "Type any number of your choice: " n 

for ((i=1; i<=n; i++)); do
    
  if (( i % 3 == 0 && i % 5 == 0 )); then
    printf "FizzBuzz "
  elif (( i % 3 == 0 )); then
    printf "Fizz "
  elif (( i % 5 == 0 )); then
    printf "Buzz "
  else
    printf "$i "
  fi

done

