// This program illustrates a pointer variable
// A pointer variable is a variable that holds the address of a memory location

#include <iostream>
using namespace std;

int main (){
  int x = 13; // int variable
  int *ptr; // pointer variable

  ptr = &x; // stores adress of x in pointer

  std::cout << "The value of x is: "<< x << '\n';
  std::cout << "The address of x is: "<< ptr << '\n';

  return 0;
}
