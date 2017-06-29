//
//  main.cpp
//  55-constructor-inheritance
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

// Constructors are not inherited in C++.

class Machine {
private:
  int id;

public:
  Machine(): id(0) { cout << "Machine no-argument constructor called" << endl; };
  Machine(int id): id(id) { cout << "Machine parameterised constructor called" << endl; };
  void info() { cout << "ID: " << id << endl; };
};

class Vehicle: public Machine {
public:
  // note cannot refer to id in this constructor because it is private in Machine
  Vehicle() { cout << "Vehicle no-argument constructor called" << endl; };
  // need to call the constructor in Machine that uses id
  Vehicle(int id): Machine(id) { cout << "Vehicle parameterised constructor called" << endl; };
};

class Car: public Vehicle {
public:
  Car() { cout << "Car no-argument constructor called." << endl; };
  // can only refer to constructors of direct superclasses, so can't call Machine(id)
  Car(int id): Vehicle(id) { cout << "Car parameterised constructor called." << endl; };
};

int main(int argc, const char * argv[]) {
  Machine machine1(10);
  machine1.info();

  Vehicle vehicle(15);
  vehicle.info();
  
  // can't call Machine's constructors because constructors are not inherited. But can handle this in constructors.
  Car car1;
  
  // but can call superclass method that refers to private instance variable
  car1.info();
  return 0;
}
