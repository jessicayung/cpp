//
//  main.cpp
//  49-returning-objects-from-functions
//
//  Created by jessica yung on 19/06/2017.
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

Animal createAnimal() {
  Animal a;
  a.SetName("Bertie");
  // C++ normally creates temp object to return this object
  return a;
  
}

Animal *createpAnimal() {
  // using new here -> memory not deallocated until you call `delete`
  Animal *pAnimal = new Animal;
  pAnimal -> SetName("Bertie");
  return pAnimal;
  
}



// if return a reference to a local variable that is out of scope
// once hit curly brackets: destructor called on Animal
// returning reference to object that doesn't exist!
/* BAD
Animal& createAnimalRef() {
  Animal a;
  a.SetName("Bertie");
  // C++ normally creates temp object to return this object
  return a;
}
 */

int main(int argc, const char * argv[]) {
  /*
  Animal *pCat1 = new Animal();
  pCat1 -> SetName("Freddy");
  pCat1 -> Speak();
  delete pCat1;
  */
  
  // assign obj to temporary return value: expect another temp object to be created -> inefficient?
  // But note copy constructors not called - compiler has optimised.
  Animal frog = createAnimal();
  frog.Speak();
  
  // Copying pointer (just an 8 byte memory address, vs potentially huge Animal)
  Animal *pFrog = createpAnimal();
  pFrog->Speak();
  // delete bc implicit new. Kind of not as nice but is common in production C++.
  delete pFrog;
  
  return 0;
}

/*
 * Two basic areas of memory: 
 * Stack: put memory associated with local variables (local vars and function calls). Stack is a small area of memory. If a fn calls
 * itself millions of times you may have stack overflow.
 * Heap: All memory available to computer. `new` allocates memory to the heap vs the stack.
 */
