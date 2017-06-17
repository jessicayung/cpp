//
//  Person.cpp
//  37-this-keyword
//
//  Created by jessica yung on 13/06/2017.
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

Person::Person(string name, int age) {
  // problem: `name` is also a state variable of the class Person
  // just `name` refers to the parameter (local var)
  // this->name refers to the state var
  // `this` is a pointer var, a var that contain the memory location
  // 0x at the start indicates it's a hexadecimal number
  cout << "Memory location for object: " << this << endl;

  this->name = name;
  this->age = age;
};

string Person::toString() {
  stringstream ss;
  
  ss << "Name: ";
  ss << name;
  ss << ". Age: ";
  ss << age;
  
  return ss.str();
}
