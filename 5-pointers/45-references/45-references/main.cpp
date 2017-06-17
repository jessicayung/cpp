//
//  main.cpp
//  45-references
//
//  Created by jessica yung on 17/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

void change_something(double &value) {
  value = 123.4;
}

int main(int argc, const char * argv[]) {
  // insert code here...
  int value1 = 0;
  // value2 is a reference (another name for) value1.
  // reference cannot hold another int, only holds synonym/alias
  int &value2 = value1;
  value2 = 10;
  
  cout << "value1: " << value1 << endl;
  cout << "value2: " << value2 << endl;
  
  // Application: Using references to change the value of a var in a function
  
  double value3 = 4.321;
  // note that you can use a var as an arg to a fn that accepts references as args
  change_something(value3);
  
  cout << "value3: " << value3 << endl;
  
  return 0;
}
