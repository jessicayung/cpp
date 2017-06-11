//
//  Person.hpp
//  36-overloading-constructors
//
//  Created by jessica yung on 11/06/2017.
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
  Person();
  // another constructor! with different params
  // define constructor here bc little code
  Person(string newName) { name = newName; age = 0;};
  Person(string newName, int newAge) {name = newName; age = newAge;};
  string toString();
};

#endif /* Person_hpp */
