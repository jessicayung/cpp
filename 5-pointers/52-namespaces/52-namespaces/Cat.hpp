//
//  Cat.hpp
//  52-namespaces
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <iostream>
#include <stdio.h>
using namespace std;

namespace cats {

// ridic example of a constant
const string CATNAME = "Freddy";
  
class Cat {
private:
public:
  Cat();
  virtual ~Cat();
  void Speak();
};
  
}
#endif /* Cat_hpp */
