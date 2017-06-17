//
//  Person.cpp
//  34-getters-and-setters
//
//  Created by jessica yung on 06/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include "Person.hpp"

Person::Person() {
  name = "George";
}

// Getter (get an instance var of an object)
string Person::ToString() {
  return "Person's name is: " + name;
}

void Person::SetName(string new_name) {
  name = new_name;
}

string Person::GetName() {
  return name;
}
