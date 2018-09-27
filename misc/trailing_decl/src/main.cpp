
/**
 *  @file main.cpp
 *
 *  have fun storming the castle! 
 *
 *  o_0
 */

#include "main.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  cout << "o_0\n\n";

  auto a = 2;
  auto b = 2.3;
  cout << decay_max(a,b) << '\n';
  cout << auto_max(a,b) << '\n';
  cout << decay_max(a,b) << '\n';

  return 0;
}
