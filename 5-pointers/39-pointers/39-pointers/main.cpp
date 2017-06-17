//
//  main.cpp
//  39-pointers
//
//  Created by jessica yung on 14/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>

using namespace std;

// when you pass `value` into this function, it's like copying data from one bucket into another
// only manipulating `value` in this function
void manipulate_prev(double value) {
  cout << "2. Value of double in manipulate: " << value << endl;
  value = 10.0;
  cout << "3. Value of double in manipulate: " << value << endl;
}

// pass in pointer
void manipulate(double *p_value) {
  cout << "2. Value of double in manipulate: " << *p_value << endl;
  // de-reference the pointer
  *p_value = 10.0;
  cout << "3. Value of double in manipulate: " << *p_value << endl;
}


int main(int argc, const char * argv[]) {
  int n_value = 8;
  
  // create pointer that stores address of n_value
  // read 'pointer to an int' or 'int pointer'
  // `int *pn_value` also works
  int* pn_value = &n_value;
  
  n_value = 9;
  
  cout << "Int value: " << n_value << endl;
  cout << "Pointer to int address: " << pn_value << endl;
  
  // Use pointer to get value by de-referencing pointer
  cout << "Int value via pointer: " << *pn_value << endl;

  cout << "==============" << endl;
  
  double d_value = 123.4;
  
  cout << "1. d_value: " << d_value << endl;
  manipulate(&d_value);
  cout << "4. d_value: " << d_value << endl;
  
  return 0;
}
