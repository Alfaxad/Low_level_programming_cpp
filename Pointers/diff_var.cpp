// A pointer has the ability to point on different variables at the same time

// This program is just goint to implement that

#include <iostream>

int main()
{

  int x =15, y = 90, z = 72; // 3 int variables
  int *ptr;

  std::cout << "Here are the values of x, y, and z:" << '\n';
  std::cout << x << "   "<< y << "   "<< z << '\n';


  // manipulate int variables with ptr

  ptr = &x; // stores address of x
  *ptr += 6; // adds 6 to the value in x

  ptr = &y; // stores address of y
  *ptr += 6; // adds 6 to the value in y

  ptr = &z; // stores address of z
  *ptr += 6; // adds 6 to the value in z


  std::cout << "The  values of x, y, and z are: " << '\n';
  std::cout << x << "   "<< y << "   "<< z << '\n';




  return 0;
}
