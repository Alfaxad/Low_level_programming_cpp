// You can use a pointer to indirectly access and modify a variable pointed to

// The program illustrates the use of indirection operator

#include <iostream>
using namespace std;

int main()
{
  int x = 13; // int variable
  int *ptr; // pointer variable to int

  ptr = &x; // stores address of x in  ptr


  std::cout << "Here is the  value of x printed twice" << '\n';
  std::cout << x <<"      " << *ptr << '\n';

  // assigning 24 to location pointed by a pointer
  *ptr = 24;

  std::cout << "New   value of x printed twice" << '\n';
  std::cout << x <<"      " << *ptr << '\n';


}
