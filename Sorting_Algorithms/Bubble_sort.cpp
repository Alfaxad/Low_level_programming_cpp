// This is a simple program to implement Bubble sort algorithm in C++
// sorts an array in ascending order

#include <iostream>

using namespace std;

//function prototypes
void sortArray(int [], int);
void showArray(int [], int);

int main()
{
  const int SIZE = 8;

  //Array of unsorted values
  int arr[SIZE] = {78, 4, 65, 12, 34, 76, 2, 1};

  //Display the values
  std::cout << "The unsorted values are:  " << '\n';
  showArray(arr, SIZE);


  //sort the values
  sortArray(arr, SIZE);

  //Display sorted values
  std::cout << "The sorted values are:  " << '\n';
  showArray(arr, SIZE);

  return 0;
}



                      /*
                                            sortArray
                          This is a function that implements the Bubble sort algorithm
                          to sort and arrange the values in ascending order.
                      */
void sortArray(int array[], int size)
{
  int temp;
  bool swap;
  do
  { swap = false;
    for (int count = 0; count < (size - 1); count++)
    {
      if (array[count] > array[count + 1])
      {
        temp = array[count];
        array[count] = array[count + 1];
        array[count + 1] = temp;
        swap = true;
      }
    }
  } while (swap);
}




                  /*
                                    showArray
                      This function shows the content of the array.
                      The parameter size holds the number of elements in the array
                  */
void showArray(int array[], int size)
{
  for (int count = 0; count < size; count++)
  {
    std::cout << array[count] << " ";
  }
  std::cout << '\n';
}
