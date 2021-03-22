// You can perform amthematical operations on pointers
// The concept is known as "pointer Arithmetic"

// This program is going to implement that simply by displaying values of an array
// First in original order, then in reverse order

#include <iostream>
using namespace std;

int main() {

  const int SIZE = 8;
  int set[] = {23, 34, 45, 56, 67, 78, 89, 90}; //an array of unknown size

  int *numPtr; //initializing a pointers

  // Below numPtr points to the set array
  numPtr = set;

  //Now we use pointer to display array elements
  std::cout << "The numbers in set are : " << '\n';
  for (int i = 0; i < SIZE; i++) {
    std::cout << *numPtr << '\n';
    numPtr++; //uses post increment
  }

  //Now displaying the elements in a reverse order
  std::cout << "/n The Elements of set in a reversed order are : " << '\n';
  for (int i = 0; i < SIZE; i++) {
    std::cout << *numPtr << '\n';
    numPtr--; //uses post decrement
  }
  return 0;
}
