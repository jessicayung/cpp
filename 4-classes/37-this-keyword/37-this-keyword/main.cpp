//
//  main.cpp
//  37-this-keyword
//
//  Created by jessica yung on 13/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
  
  Person person1;
  Person person2("Bob", 42);
  Person person3("Cara", 5);
  
  // memory seems to be stored in larger number location first
  cout << person1.toString() << "; memory location: " << &person1 << endl;
  cout << person2.toString() << "; memory location: " << &person2 << endl;
  cout << person3.toString() << "; memory location: " << &person3 << endl;
  return 0;
}
