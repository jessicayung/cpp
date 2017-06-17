//
//  main.cpp
//  41-pointers-and-arrays
//
//  Created by jessica yung on 14/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
  
  string texts[] = {"one", "two", "three"};
  
  cout << sizeof(texts)/sizeof(string) << endl;
  
  // pointers and arrays are similar
  // an array var is a pointer!
  // but array variable knows how much data it's pointing at, pointers don't
  string *ptexts = texts;
  
  // using a pointer to iterate through an array
  for (int i=0; i<sizeof(texts)/sizeof(string); i++) {
    // array element reference syntax
    cout << texts[i] << " " << flush;
    cout << ptexts[i] << " " << flush;
  }
  
  cout << endl;
  
  // using a pointer to iterate through an array
  // third section of for loop happens every time at the end of the loop
  for (int i=0; i<sizeof(texts)/sizeof(string); i++, ptexts++) {
    cout << *ptexts << " " << flush;
  }
  
  // `*p_element = texts;` works too
  string *p_element = &texts[0];
  // [] has precedence over &
  string *p_end = &texts[sizeof(texts)/sizeof(string) - 1];
  
  while (true) {
    cout << *p_element << " " << flush;
    
    if (p_element == p_end) {
      break;
    }
    
    p_element++;
  }
  
  return 0;
}
