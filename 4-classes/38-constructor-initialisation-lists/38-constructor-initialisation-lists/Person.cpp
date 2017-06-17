//
//  Person.cpp
//  38-constructor-initialisation-lists
//
//  Created by jessica yung on 14/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include "Person.hpp"
#include <iostream>
#include <sstream>
using namespace std;

string Person::toString() {
  stringstream ss;
  
  ss << "Name: ";
  ss << name;
  ss << ". Age: ";
  ss << age;
  
  return ss.str();
}
