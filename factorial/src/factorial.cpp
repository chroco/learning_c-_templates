/*
 *  wtf, this compiles?
 */

#include "factorial.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  cout << factorial<4>::value << "\n";   
}
