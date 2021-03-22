// Pointers can be used as function parameter
// These pointers use two functions that accept addresses of variables as arguments

#include <iostream>
#include <cmath> //for calling out the power function
using namespace std;

// Function prototypes
void getNumber(int *);
int squareNumber(int *);

int main() {

  int number, sq;
  //call getNumber and pass address of a number
  getNumber(&number);

  // call squareNumber and pass address of a number
  sq = squareNumber(&number);

  // Display the value of the square
  std::cout << "The number entered is :"<< number << '\n';
  std::cout << "The square of the number is :"<< sq << '\n';

  return 0;
}


//******************************************************
// Definition of getNumber. The parameter, input, is a *
// pointer. This function asks the user for a number.  *
// The value entered is stored in the variable         *
// pointed to by inpNumber.                                *
//******************************************************

void getNumber(int *inpNumber){
  std::cout << "Enter an interger number" << '\n';
  std::cin >> *inpNumber;
}



//******************************************************
// Definition of doubleValue. The parameter, val, is a *
// pointer. This function squares the variable         *
// pointed to by val.                                  *
//******************************************************

int squareNumber(int *val){
  return pow(*val, 2);
}
