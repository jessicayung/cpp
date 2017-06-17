//
//  main.cpp
//  48-new-operator
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
  Animal() {
    cout << "Animal created." << endl;
  };
  
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
  // allocate memory for a single object
  // but `new` does not de-allocate memory on its own
  Animal *p_cat1 = new Animal();
  // *p_cat1.SetName("hi"); doesn't work because dot operator has higher precedence than * operator.
  (*p_cat1).Speak();
  p_cat1->SetName("Freddy");
  // recall p_cat1 was set to point to something with new, so need to de-allocate memory
  delete p_cat1;
  
  // this pointer is not pointing to anything
  Animal *p_cat2 = NULL;
  // if you delete a null pointer, your program will likely crash
  
  // save diff of ptr in long because size of ptr same as long (8 bytes)
  long diff_ptrs = p_cat1 - p_cat2;
  cout << "Size of pointer: " << sizeof(p_cat1) << endl;
  
  return 0;
} // destructor called since var `cat` goes out of scope,  memory deallocated
