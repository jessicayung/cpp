//
//  main.cpp
//  51-arrays-and-functions
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#include <iostream>
using namespace std;


// equivalent to show2(string* textz ...)
void show1(string textz[], const int n_elements) {
  // with this syntax we lose the size of an array argument in a function. The size of this array becomes the size of the pointer.
  // so expression returns the size of the ptr, 8 bytes
  // cout << sizeof(textz) << endl;
  
  for (int i=0; i< n_elements; i++) {
    cout << textz[i] << endl;
  }
}

// equivalent to show1, i.e. void show1(string textsz[] ...)
void show2(string* textz, const int n_elements) {
  // with this syntax we lose the size of an array argument in a function. The size of this array becomes the size of the pointer.
  // so expression returns the size of the ptr, 8 bytes
  // cout << sizeof(textz) << endl;
  
  for (int i=0; i< n_elements; i++) {
    cout << textz[i] << endl;
  }
}


// if want to retain array size info, need to pass p
// need to specify size of array
// &texts[3] -> ref to element of array?
void show3(string (&textz)[3]) {
  for (int i=0; i<sizeof(textz)/sizeof(string); i++) {
    cout << textz[i] << endl;
  }
}

// do not return pointers to local variables, bc local vars are destroyed after fn terminates
// declare them globally outside fns instead

// also fine if you init object using new, but remember to delete it
// not optimal bc you need to know 'new' was used.
char* get_memory() {
  char *pmem = new char[100];
  return pmem;
}

// common pattern in C++ to create corresponding free memory fn that you must call whenever you call get_memory
// and include in documentation
void free_memory(char *pmem) {
  delete [] pmem;
}

int main(int argc, const char * argv[]) {
  
  // initialise array of strings (init'd so don't need to specify array size)
  string texts[] = {"apple", "orange", "banana"};
  show1(texts, sizeof(texts)/sizeof(string));
  show3(texts);
  
  char *pmemory = get_memory();
  free_memory(pmemory);
  return 0;
}
