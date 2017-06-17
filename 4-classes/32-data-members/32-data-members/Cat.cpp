//
//  Cat.cpp
//  32-data-members
//
//  Created by jessica yung on 05/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
// pastes Cat.hpp file into this file behind the scenes
#include "Cat.hpp"

// header file defines how cpp will be used
// compiler links (hpp and cpp) files together at the end after compiling cpp first

using namespace std;

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
