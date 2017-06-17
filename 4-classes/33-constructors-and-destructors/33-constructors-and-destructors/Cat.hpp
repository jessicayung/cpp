//
//  Cat.hpp
//  33-constructors-and-destructors
//
//  Created by jessica yung on 06/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>

class Cat {
private:
  // in C++ 11 can set default value of state for all objects
  // but don't initialise a non-static variable in the class
  // data member: instance variable of type bool
  bool happy;
public:
  // Methods:
  // prototype specifies main bit of fn (method)
  void Speak();
  void makeHappy();
  void makeSad();
  // Constructor
  // does not have a return type
  Cat();
  // Destructor
  ~Cat();
};

#endif /* Cat_hpp */
