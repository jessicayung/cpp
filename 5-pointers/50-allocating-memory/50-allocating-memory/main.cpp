//
//  main.cpp
//  50-allocating-memory
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

class Animal {
private:
  string name;
  
public:
  Animal() {
    cout << "Animal created." << endl;
  };
  
  // uses constructor initialisation list
  Animal(const Animal& other): name(other.name) {
    cout << "Animal created by copying." << endl;
  };
  
  ~Animal() {
    cout << "Destructor called." << endl;
  }
  
  void SetName(string new_name) {this->name = new_name;};
  
  void Speak() const { cout << "My name is: " << name << endl;};
  
};
int main(int argc, const char * argv[]) {
  // create new animal, allocate memory and instantiate object
  Animal *panimal = new Animal;
  // create 10 animals
  Animal *panimals = new Animal[10];

  // work with the 6th animal in the array
  panimals[5].SetName("George");
  panimals[5].Speak();
  
  delete panimal;
  // tell C++ we're deleting many objects, not just one
  // Destructor called for each object
  delete [] panimals;
  
  // allocate 1000 bytes of memory
  char *pmem = new char[1000];
  delete [] pmem;
  return 0;
}
