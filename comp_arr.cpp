#include <iostream>

// Program to compare the contents of an array

int main() {

  const int SIZE = 5;

  int arrayA[SIZE] = {1,2,3,4,5};
  int arrayB[SIZE] = {1,2,3,4,5};

  bool arraysEqual = true; //flag variable
  int count = 0; //loop count variable

  //Determine whether elements contain the same data

  while (arraysEqual && count < SIZE) {
    if (arrayA[count] != arrayB[count])
      arraysEqual = false;
    count++;
  }

  if (arraysEqual)
    std::cout << "The arrays are equal.\n";
  else
    std::cout << "The arrays are not equal.\n";
  return 0;
}
