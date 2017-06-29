//
//  main.cpp
//  54-encapsulation
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

// Encapsulation: Hide away instance variables and leave only methods users need to use public
// restrict access to class as much as possible

class Frog {
private:
  string name;
  
// common to declare private methods in a different section to instance variables
private:
  string GetName() { return name; };
  
public:
  Frog(string newName): name(newName) {};
  // virtual ~Frog();
  void info() { cout << "My name is: " << GetName() << endl; };
};

int main(int argc, const char * argv[]) {
  
  Frog frog("Freddy");
  
  // made private
  // cout << frog.GetName() << endl;
  frog.info();
  
  return 0;
}
