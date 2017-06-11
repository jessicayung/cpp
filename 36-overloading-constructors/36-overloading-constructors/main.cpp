//
//  main.cpp
//  36-overloading-constructors
//
//  Created by jessica yung on 11/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

using namespace std;

int main(int argc, const char * argv[]) { 

  Person person1;
  // picks constructor based on parameters
  Person person2("Bob");
  Person person3("Cara", 30);
  
  cout << person1.toString() << endl;
  cout << person2.toString() << endl;
  cout << person3.toString() << endl;
  return 0;
}
