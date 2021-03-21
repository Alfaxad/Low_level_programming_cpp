//  This program prints an adress of a variable
// Every variable is assigned to amemory location, whose adrress can be retrieved using "&" operator
// The address of the memory location is called a pointer

#include <iostream>
using namespace std;

char letter;
short number;  // assigning variables of different datatypes
float cheque;

int main() {

  // prints address to each  variable, first in hexadecimal
  //then in decimal


  std::cout << "Hexadecimal address of number is: " <<  &number << '\n';
  std::cout << "Hexadecimal address of cheque is: " <<  &cheque << '\n';
  std::cout << "Hexadecimal address of letter is: " <<  &letter << '\n';

  std::cout << "decimal address of letter is: " <<  long(&letter) << '\n';
  std::cout << "decimal address of number is: " <<  long(&number) << '\n';
  std::cout << "decimal address of cheque is: " <<  long(&cheque) << '\n';
  return 0;
}
