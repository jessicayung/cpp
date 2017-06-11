//
//  Person.cpp
//  36-overloading-constructors
//
//  Created by jessica yung on 11/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include "Person.hpp"
#include <iostream>
#include <sstream>
using namespace std;

Person::Person() {
  name = "undefined";
  age = 0;
}

string Person::toString() {
  stringstream ss;
  
  ss << "Name: ";
  ss << name;
  ss << ". Age: ";
  ss << age;
  
  return ss.str();
}
