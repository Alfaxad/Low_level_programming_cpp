#include <iostream>
#include <vector>

//A program to give insight on Vector type and Standard Template Library(STL)


int main()
{
  int c, n, z;
  std::vector<int> nambers(n);
  std::vector<int> numbers(n, z); //vector declaration and initialization

  c = numbers.at(5); // assigns value of number[5] to c
  std::cout << c << '\n';

  x = numbers.capacity(); // returns the capacity of the vector "numbers" to x

  p = numbers.clear(); // clears the vector 'numbers'

  z = numbers.empty(); // empty's the vector "numbers"

  q = numbers.pop_back(); // removes the last element from the vector "number"

  r = numbers.push_back(n); //stores value in the last element of the vector

  s = numbers.reverse();  //reverses order of elements in a vector

  t = numbers.resize(n);  //resizes vector to n elements

  u = numbers.resize(n, z); //elements will be initialized with value "z"

  v = numbers.size(); //returns number of elements in a vector

  swapper = nambers.swap(numbers); // swaps content of vect1 and vect2

  return 0;


}
