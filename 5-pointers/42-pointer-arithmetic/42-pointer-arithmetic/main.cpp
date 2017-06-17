//
//  main.cpp
//  42-pointer-arithmetic
//
//  Created by jessica yung on 14/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

  const int n_strings = 5;
  string texts[n_strings] = {"one", "two", "three", "four", "five"};
  
  string *ptexts = texts;
  
  cout << *ptexts << endl;

  // moves ptr forward by one unit (here a unit is a string)
  ptexts++;
  
  cout << *ptexts << endl;
  
  ptexts = &texts[0];
  
  // comparing pointers
  // don't read or write this bc it points to nth
  string *pend = &texts[n_strings];
  
  while (ptexts != pend) {
    cout << *ptexts << endl;
    
    ptexts++;
  }
  
  // set ptexts back to start of texts
  ptexts = &texts[0];
  
  // pointers are longs
  // casting optional because it's already a long but just to be clear
  long elements = (long)(pend - ptexts);
  cout << elements << endl;
  
  // point to the middle of the array
  // set ptexts back to the start of texts
  ptexts = &texts[0];
  
  ptexts += n_strings / 2;
  cout << *ptexts << endl;
  
  return 0;
}
