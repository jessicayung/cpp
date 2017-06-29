//
//  main.cpp
//  52-namespaces
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
#include "Cat.hpp"
#include "Animals.hpp"
using namespace std;

// Motivation: want to create methods or classes that already exist (names already used)

int main(int argc, const char * argv[]) {
  cats::Cat cat;
  cat.Speak();
  
  jy::Cat jycat;
  jycat.Speak();
  
  cout << cats::CATNAME << endl;
  cout << jy::CATNAME << endl;  
  
  return 0;
}
