//
//  main.cpp
//  35-string-streams
//
//  Created by jessica yung on 11/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;
// string streams allow you to concatenate disparate forms of data
// using plus signs to e.g. concatenate ints with strings makes compiler throw errors

int main(int argc, const char * argv[]) {
  // insert code here...
  string name = "Bob";
  int age = 32;
  
  stringstream ss;
  
  // put strings etc to ss (stream of data)
  ss << "Name is: ";
  ss << name;
  ss << ". Age is: ";
  ss << age;
  
  // ss.str() converts ss to a string
  cout << ss.str() << endl;
  return 0;
}
