//
//  main.cpp
//  46-const-keyword
//
//  Created by jessica yung on 17/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

class Animal {
private:
  string name;

public:
  void SetName(string new_name) {this->name = new_name;};
  // method that does not change instance data: declare const after method name, before implementation
  // if try to change e.g. `name`, doesn't build
  void Speak() const { cout << "My name is: " << name << endl;};
  
};

int main(int argc, const char * argv[]) {
  
  // tip: read types backwards
  
  int value1 = 7;
  value1 = 10;
  int value2 = 14;
  // pointer = address of value1
  int *pvalue1 = &value1;
  // pointer to an int that is constant
  const int *pvalue2 = &value1;
  // cannot do this: *pvalue2 = 10;
  // constant pointer to an int
  int * const pvalue3 = &value2;
  // cannot do this: pvalue3 = &value1;
  // constant ptr to int that is constant (through ptr)
  // i.e. can change var directly but not through ptr
  const int * const pvalue4 = &value1;
  
  
  cout << "*pvalue1: " << *pvalue1 << endl;
  cout << "value1: " << value1 << endl;

  Animal animal1;
  animal1.SetName("Freddy");
  animal1.Speak();
  
  return 0;
}
