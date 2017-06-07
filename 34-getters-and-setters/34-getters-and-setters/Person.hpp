//
//  Person.hpp
//  34-getters-and-setters
//
//  Created by jessica yung on 06/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <stdio.h>

using namespace std;

class Person {
private:
  string name;
public:
  // Constructor
  Person();
  // Getter
  string ToString();
  string GetName();
  // Setter
  // Some people think this is bad because you're exposing the private var `name`
  void SetName(string new_name);
};

#endif /* Person_hpp */
