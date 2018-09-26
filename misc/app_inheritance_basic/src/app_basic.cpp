/**
 * @brief app_template
 */

#include "basic.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
  Base<Derived> *pBase = new Derived;
  pBase->interface(); //outputs "Derived"
  delete pBase;
  return 0;
}
