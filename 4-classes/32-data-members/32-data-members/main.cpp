//
//  main.cpp
//  32-data-members
//
//  Created by jessica yung on 05/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
#include "Cat.hpp"

int main(int argc, const char * argv[]) {
  Cat tiger;
  // this is bad
  tiger.happiness = false;
  
  // don't want to set values of variables outside the class, want to
  // encapsulate so we only have to recode the class instead of changing
  // external code as well. so give Class a method that can set the
  // value of a state

  tiger.makeHappy();
  tiger.Speak();
  
  Cat jaguar;
  // if you don't initialise variables before you use them,
  // they'll just have random values
  // usually initialise vars using constructors
  jaguar.makeSad();
  jaguar.Speak();
  return 0;
}
