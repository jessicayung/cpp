//
//  Animals.hpp
//  52-namespaces
//
//  Created by jessica yung on 28/06/2017.
//  Copyright © 2017 Jessica Yung. All rights reserved.
//

#ifndef Animals_hpp
#define Animals_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

namespace jy {

const string CATNAME = "Tiddles";
  class Cat {
  public:
    Cat();
    virtual ~Cat();
    void Speak();
  };
}

#endif /* Animals_hpp */
