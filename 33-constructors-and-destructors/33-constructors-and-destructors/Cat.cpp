//
//  Cat.cpp
//  33-constructors-and-destructors
//
//  Created by jessica yung on 06/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
// pastes Cat.hpp file into this file behind the scenes
#include "Cat.hpp"

// header file defines how cpp will be used
// compiler links (hpp and cpp) files together at the end after compiling cpp first

using namespace std;

// Constructor
Cat::Cat() {
  cout << "Cat created" << endl;
  happy = true;
}

// destructor
// Cat destroyed after program ends, memory deallocated, given back to OS
// since scope is curly braces
// Can arbitrarily add curly braces to destroy objects
Cat::~Cat() {
  cout << "Cat destroyed" << endl;
}

void Cat::Speak() {
  
  if(happy) {
    cout << "Meow!" << endl;
  }
  else {
    cout << "Ssss!" << endl;
  }
}

void Cat::makeHappy() {
  happy = true;
}

void Cat::makeSad() {
  happy = false;
}
