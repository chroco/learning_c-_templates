#ifndef BASIC_H
#define BASIC_H

#include <iostream>

using namespace std;

template <class structT>
struct Base
{
  void interface()
  {
    // ...
    static_cast<structT*>(this)->implementation();
    // ...
  }
};

struct Derived : Base<Derived>
{
  void implementation()
  {
    cout << "Hello world!\n"; 
  }
};

#endif

