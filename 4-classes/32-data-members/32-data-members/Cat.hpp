//
//  Cat.hpp
//  32-data-members
//
//  Created by jessica yung on 05/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>

class Cat {
private:
  // in C++ 11 can set default value of state for all objects
  // data member: instance variable of type bool
  bool happy = true;
public:
  // States of a Cat
  bool happiness;
  // Methods:
  // prototype specifies main bit of fn (method)
  void Speak();
  void makeHappy();
  void makeSad();
};

#endif /* Cat_hpp */
