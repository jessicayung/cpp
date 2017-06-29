//
//  main.cpp
//  pointers-summary
//
//  Created by jessica yung on 29/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;

// 39 manipulating the value of a variable (by passing in pointer)
void manipulate(double *pvalue) {
  // de-reference pointer
  *pvalue = 10.0;
}

// 45 References
void manipulate_pass_ref(double &value) {
  value = 123.4;
}

int main(int argc, const char * argv[]) {
  
  /* 
   * 39 Pointers
   */
  cout << "Manipulating the value of a variable (by passing in pointer)" << endl;
  double dvalue = 123.4;
  cout << "1. dvalue: " << dvalue << endl;
  // create pointer: type [vartype]*
  // get address of variable: &[varname]
  double* pdvalue = &dvalue;
  manipulate(pdvalue);
  cout << "2. dvalue: " << dvalue << endl;
  
  /*
   * 41 Arrays as pointers, iterating through arrays using pointers
   */
  cout << "An array variable is a pointer. Array vars know how much data it's pointing at, whereas pointers don't." << endl;
  const int N_STRINGS = 5;
  string texts[N_STRINGS] = {"one", "two", "three", "four", "five"};
  string *ptexts = texts;
  cout << "Use a pointer to iterate through an array" << endl;
  cout << "Method 1: " << endl;
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
  
  /*
   * 42 Pointer Arithmetic
   */

  // 42.1 Incrementing pointers
  cout << *ptexts << endl;
  
  // moves ptr forward by one unit (here a unit is a string)
  ptexts++;
  
  cout << *ptexts << endl;

  // Set pointer back to beginning (where it was before)
  ptexts = &texts[0];
  
  // 42.2 Comparing pointers
  cout << "Method 4 of iterating through an array: by comparing pointers" << endl;
  // don't read or write this bc it points to nth
  string *pend = &texts[N_STRINGS];
  
  while (ptexts != pend) {
    cout << *ptexts << endl;
    
    ptexts++;
  }
  
  // set ptexts back to start of texts
  ptexts = &texts[0];
  
  // 42.3 Find the number of elements in an array (?)
  cout << "Pointers are longs." << endl;
  // casting optional because it's already a long but just to be clear
  long elements = (long)(pend - ptexts);
  cout << "Elements: " << elements << endl;
  
  // 42.4 Find the middle element of an array
  // point to the middle of the array
  // set ptexts back to the start of texts
  ptexts = &texts[0];
  
  ptexts += N_STRINGS / 2;
  cout << *ptexts << endl;
  
  /*
   * 43 Char Arrays
   */
  // 43.1 Storing text in an array of chars
  char text[] = "hello";
  char text_extensive[] = {'h', 'e', 'l', 'l', 'o'};
  
  cout << sizeof(text) << endl;
  cout << sizeof(text_extensive) << endl;
  
  // sizeof(text) is six! Even though we only have five chars.
  // last char is null string terminator, append zero value to string that isn't printed in cout
  // is appended because we used double quotes
  
  // TODO: tidy
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
  
  /*
   * 44 Reversing a string
   */
  
  const int N_CHARS = sizeof(text) - 1;
  char* pcstart = text;
  char* pcend = text + N_CHARS - 1;
  char temp_start;
  while (pcstart < pcend) {
    temp_start = *pcstart;
    *pcstart = *pcend;
    *pcend = temp_start;
    pcstart++;
    pcend--;
  }
  
  cout << text << endl;
  
  /* Alt way to reverse string:
   cout << "Original text: " << text << endl;
   char new_text[n];
   cout << "Reversed: " << new_text << endl;
   for (int i=n-1; i>=0; i--) {
   new_text[n - i] = text[i];
   }
   
   cout << new_text << endl;
   */
  
  
  /*
   * 45 References
   */
  
  int value1 = 0;
  // value2 is a reference (another name for) value1.
  // reference cannot hold another int, only holds synonym/alias
  int &value2 = value1;
  value2 = 10;
  
  cout << "value1: " << value1 << endl;
  cout << "value2: " << value2 << endl;
  
  // Application: Using references to change the value of a var in a function
  
  double value3 = 4.321;
  // note that you can use a var as an arg to a fn that accepts references as args
  manipulate_pass_ref(value3);
  
  cout << "value3: " << value3 << endl;
  
  
  return 0;
}
