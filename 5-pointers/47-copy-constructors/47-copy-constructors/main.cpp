//
//  main.cpp
//  47-copy-constructors
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
  Animal() { cout << "Animal created." << endl; };
  // define copy constructor explicitly (else C++ does it for ou)
  // copy fields of `other` animal to our new animal
  // but if we don't explicitly copy fields in our copy constructor, the fields are not initialised (left blank).
  // notice we've used constructor initialisation list to set field values
  // notice also this is a const referenc, so we can't change the `other` animal.
  // can't call non-const methods on `other` animal either, since those may modify the `other` animal.
  Animal(const Animal& other): name(other.name) { cout << "Animal created by copying." << endl; };
  void SetName(string new_name) {this->name = new_name;};
  // method that does not change instance data: declare const after method name, before implementation
  // if try to change e.g. `name`, doesn't build
  void Speak() const { cout << "My name is: " << name << endl;};
  
};
int main(int argc, const char * argv[]) {
  
  Animal animal1;
  animal1.SetName("Freddy");
  
  // can set name of second animal independently
  // but constructor is not called - we are implicitly invoking the copy constructor.
  Animal animal2 = animal1;
  // animal2.SetName("Bob");
  
  animal1.Speak();
  animal2.Speak();
  
  // another way of calling tho copy constructor (directly)
  Animal animal3(animal1);
  animal3.Speak();
  
  return 0;
}
