//
//  main.cpp
//  57-static-keyword
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

// .hpp header file

class Test {
public:
  // traditional to put constants in upper case
  // need to give values to const when you declare them
  // make public if you want them to be accessible outside of class
  static int const MAX = 99;

private:
  // if static: one variable shared between all instances of the object
  // need to initialise static vars
  // e.g. count of number of objects
  // static vars can be accessed and changed by all objects of that class
  static int count;
  // non-static variable
  int id;
public:
  // constructor
  Test() {
    // if id = ++count: increment first then use
    // this: use then increment
    id = count++;
  }
  
  int GetId() {
    return id;
  }
  
  // static methods can only access static variables
  static void ShowInfo() {
    cout << count << endl;
  }
};

// .cpp source

// don't need object to access var

// this code is within class, so can access private var
int Test::count = 0;

int main(int argc, const char * argv[]) {
  
  Test::ShowInfo();

  cout << Test::MAX << endl;
  
  // create objects, increment count
  Test test1;
  cout << "Test1 id: " << test1.GetId() << endl;
  Test test2;
  cout << "Test2 id: " << test2.GetId() << endl;
  Test::ShowInfo();
  
  return 0;
}
