
/**
 *  @file main.hpp
 *
 *  o_0
 */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>

template<typename T>
T max(T a, T b)
{
  std::cout << "* ";
  return b < a ? a : b;
}

#endif

