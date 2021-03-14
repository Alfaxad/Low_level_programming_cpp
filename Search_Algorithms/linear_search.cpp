// This program demonstras the SearchList function
// which performs linear search on an interger array

#include <iostream>

//function prototype
int SearchList(int [], int, int);

const int SIZE = 5;

int main()
{
  int tests[SIZE] = {74, 67, 97, 87, 56};
  int results; //holds the search results

  // Search the array for value 87
  results = SearchList(tests, SIZE, 87);

  // if SearchList returned -1 87 is not present
  if(results == -1)
  {
    std::cout << "You did not earn 87 on a test" << '\n';
  }
  else
  {
    std::cout << "You earned 87 points on  test " << (results+1)<< ". \n";
  }
  return 0;
}

                /*            SearchList Fuction
                    Perfoms linear Search in an interger array
                    The list array, which has size elements, is searched for
                    the number stored in value. If the number is found, its array
                    subscript is returned. Otherwise, -1 is returned.
                    */

int SearchList(int list[], int size, int value)
{
  int index = 0; //used as a subscript to search array
  int position = -1; // Used to record position of a search value
  bool found = false; //flag to indicate if value is found


  while (index < size && !found)
  {
    if (list[index] == value)   //If the value is found
    {
      found = true; // set the flag
      position = index; //record the value's subscript
    }
    index++;   // go to next element
  }
  return position;
}
