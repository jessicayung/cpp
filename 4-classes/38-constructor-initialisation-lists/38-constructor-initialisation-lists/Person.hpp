//
//  Person.hpp
//  38-constructor-initialisation-lists
//
//  Created by jessica yung on 14/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Person {
private:
  string name;
  int age;
public:
  // constructor initialisation lists
  // only for constructors, not for set methods
  Person(): name("undefined"), age(0) {};
  Person(string newName): name(newName), age(0) {};
  Person(string newName, int newAge): name(newName), age(newAge) {};
  string toString();
};

#endif /* Person_hpp */
