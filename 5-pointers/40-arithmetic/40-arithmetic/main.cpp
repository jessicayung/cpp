//
//  main.cpp
//  40-arithmetic
//
//  Created by jessica yung on 14/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
  
  // integer division disregards the remainder
  double value1 = 7/2;
  cout << value1 << endl;

  double value2 = (double)7/2;
  cout << value2 << endl;
  
  // casting to int throws away stuff after the decimal point
  
  double value3 = 10;
  value3 /= 5;
  cout << value3 << endl;
  
  // etc...
  
  return 0;
}
