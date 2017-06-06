//
//  main.cpp
//  33-constructors-and-destructors
//
//  Created by jessica yung on 06/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
#include "Cat.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
  cout << "Starting program" << endl;
  // instantiate object, constructor runs
  Cat bob;
  bob.Speak();
  cout << "Ending program" << endl;
  return 0;
}
