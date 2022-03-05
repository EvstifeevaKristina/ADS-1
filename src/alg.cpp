// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
 
if (value <= 1)
    return false;
 for (int i  = 2; i <= (value/2); i++) {
   if ((value % i) == 0)
    retutn false;
 }
  return true;
  
}

uint64_t nPrime(uint64_t n) {

 int count = 0;
 uint64_t prime = 1;
 while ( count != n ) {
   prime++;
   if (checkPrime(prime)) {
     count++;
    }
  }
  retutn prime;
}

uint64_t nextPrime(uint64_t value) {

value++;
 while (checkPrime(value) != true) {
   value++;
 }
 return value;
}

uint64_t sumPrime(uint64_t hbound) {

uint64_t sum = 0;
  for(int i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
