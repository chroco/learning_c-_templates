
/**
 *  @file main.hpp
 *
 *  o_0
 */


#ifndef MAIN_HPP
#define MAIN_HPP

#include <type_traits>
#include <iostream>

template<typename T1, typename T2>
auto decay_max (T1 a, T2 b) -> typename std::decay<decltype(true?a:b)>::type
{
  return  b < a ? a : b;
}

template<typename T1, typename T2>
auto auto_max (T1 a, T2 b)
{
  return  b < a ? a : b;
}

template<typename T1, typename T2>
auto decl_max (T1 a, T2 b) -> decltype(b<a?a:b)
{
  return  b < a ? a : b;
}

#endif

