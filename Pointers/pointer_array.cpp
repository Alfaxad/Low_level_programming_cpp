// This program processes an array using pointer notation

#include <iostream>
using namespace std;

// say lets define an array of a fixed size
// Then store values in the array using pointer indirection

int main() {

  const int SIZE = 7; // constant size of an array

  int numbers[SIZE]; //defined an array of numbers

  // Now we get values to store in array using pointer notation

  std::cout << "Enter "<< SIZE << " numbers :" << '\n';
  for (int i = 0; i < SIZE; i++) {
    std::cin >> *(numbers + i);
  }

  // Display the values of numbers
  std::cout << "Here are the numbers that you Entered :" << '\n';

  for (int i = 0; i < SIZE; i++) {
    std::cout << *(numbers + i) <<"    " << '\n';
  }
  return 0;
}
