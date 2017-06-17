//
//  main.cpp
//  43-char-arrays
//
//  Created by jessica yung on 14/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
  
  // can store text in an array of chars
  // similar to char text[] = {'h', 'e', 'l', 'l', 'o'};, except size is different (size of "hello" is one greater because it has null string terminator)
  // store in a primitive string (vs the string class)
  char text[] = "hello";
  
  char text_extensive[] = {'h', 'e', 'l', 'l', 'o'};
  
  cout << text << endl;
  
  cout << sizeof(text) << endl;
  
  cout << sizeof(text_extensive) << endl;
  
  // sizeof(text) is six! Even though we only have five chars.
  // last char is null string terminator, append zero value to string that isn't printed in cout
  // is appended because we used double quotes
  for (int i=0; i<sizeof(text); i++) {
    cout << i << ": " << text[i] << endl;
  }
  
  int k = 0;
  
  while (true) {
    if (text[k] == 0) {
      break;
    }
    
    cout << text[k] << flush;
    
    k++;
  }
  
  return 0;
}
