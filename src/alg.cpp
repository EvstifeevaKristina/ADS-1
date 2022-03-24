// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value <= 1)
    return false;
  for (int i = 2; i <= value/2); i++) {
    if ((value % 1) == 0)
       return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int count = 0;
  uint64_t prime = 1;
  while ( count != n ) {
    prime++;
    if (checkPrime(prime)) {
      count++;
    }
  }
  return prime;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  value;
  while (checkPrime(value) != true) {
    value++;
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  for (int i = 2; i <= hbound ; i++) {
    if (checkPrime(i)) {
      sum += 1;
    }
  }
  return sum;
}
