//
//  main.cpp
//  53-inheritance
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

// superclass
class Animal {
public:
  void Speak() { cout << "Grrr" << endl; };
};

// subclass. Cat is a type of Animal
class Cat: public Animal {
public:
  void Jump() { cout << "Cat jumps" << endl; };
};

// subclass. Tiger is a type of Cat (and so also a type of Animal).
class Tiger: public Cat {
public:
  void AttackAntelope() { cout << "Tiger attacking" << endl; };
};

int main(int argc, const char * argv[]) {
  
  Animal a;
  a.Speak();
  
  Cat c;
  c.Speak();
  c.Jump();
  
  Tiger t;
  t.Speak();
  t.Jump();
  t.AttackAntelope();
  
  return 0;
}
