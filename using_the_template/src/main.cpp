
/**
 *  @file main.cpp
 *
 *  have fun storming the castle! 
 *
 *  o_0
 */

#include "main.hpp"
#include <iostream>
#include <string>

//using namespace std;

int main(int argc, char *argv[])
{
  std::cout << "o_0\n";
  
  int i =42;
  std::cout << ::max(7,i) << "'\n";
  
  double f1 = 3.4;
  double f2 = -6.7;
  std::cout << ::max(f1, f2) << '\n';

  std::string s1 = "mathematics";
  std::string s2 = "math";
  std::cout << ::max(s1, s2) << '\n';

  return 0;
}
