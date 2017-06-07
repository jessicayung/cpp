//
//  main.cpp
//  34-getters-and-setters
//
//  Created by jessica yung on 06/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

int main(int argc, const char * argv[]) {
  Person person1;
  cout << person1.ToString() << endl;
  person1.SetName("Jack");
  cout << person1.ToString() << endl;
  cout << "Get name of person: " << person1.GetName() << endl;
  return 0;
}
