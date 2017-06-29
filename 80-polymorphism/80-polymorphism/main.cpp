//
//  main.cpp
//  80-polymorphism
//
//  Created by jessica yung on 29/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
  // insert code here...
  std::cout << "Hello, World!\n";
    return 0;
  
  // can always use a derived class where a superclass is expected (also for refs and pointers, e.g. pointer of type Animal = new Cat, p_animal.Speak() gives Animal Speak() unless Speak() in Animal is virtual)
  // virtual: fn can be overridden by derived class ones
  
  // destructors should always be declared virtual so it cleans up the right memory (esp if class has virtual methods)
  
  // virtual void speak()=0; -> some derived class must implement this method. This is called a pure virtual method.
}
