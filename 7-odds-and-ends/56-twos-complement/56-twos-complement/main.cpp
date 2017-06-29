//
//  main.cpp
//  56-twos-complement
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

// how ints are represented in computers

int main(int argc, const char * argv[]) {
  
  // max value you can fit in a char, 0 is grouped with positives
  // char has 8 bits, one bit used for sign. -> max value 2**7-1
  // 0 for positive, 1 for negative
  char value = 127;
  
  // 127
  cout << (int)value << endl;
  
  // incrementing max char value does not throw an error
  value++;
  
  // -128 (min value of char)
  cout << (int)value << endl;
  
  return 0;
}

// One's Complement:
// Leading digit indicates sign as before
// but 111 corresponds to least non-positive (-0) as opposed to most negative
// 110 = -1, 101 = -2 etc.
// addition: if you get an overflow bit to the left, you add that to the least significant bit.

// Two's Complement (used by most computers):
// 111 corresponds to least negative (-1), leading digit indicates sign as before
// addition: discard overflow
