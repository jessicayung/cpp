//
//  main.cpp
//  44-reversing-a-string
//
//  Created by jessica yung on 17/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
  
  char text[] = "hello";
  // size = # chars + null terminator from quotes
  const int n_chars = sizeof(text) - 1;
  
  // ptr to start of `text`
  char *p_start = text;
  // ptr te end of `text`
  char *p_end = text + n_chars - 1;
  char temp_start;
  cout << *p_end << endl;

  while (p_start < p_end) {
    temp_start = *p_start;
    *p_start = *p_end;
    *p_end = temp_start;
    p_start++;
    p_end--;
  }
  
  cout << text << endl;
  /*
  cout << "Original text: " << text << endl;
  char new_text[n];
  cout << "Reversed: " << new_text << endl;
  for (int i=n-1; i>=0; i--) {
    new_text[n - i] = text[i];
  }
  
  cout << new_text << endl;
  */
  return 0;
}
