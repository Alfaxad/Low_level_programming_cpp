//The following program implements Selection sort algorithm
//to sort an array in ascending order

//selection sort is more efficient than bubble sort algorithm

#include <iostream>
using namespace std;

//function prototypes
void selectionSort(int [], int);
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
  selectionSort(arr, SIZE);

  //Display sorted values
  std::cout << "The sorted values are:  " << '\n';
  showArray(arr, SIZE);

  return 0;
}




                    /*
                                    selectionSort
                         This function performs an ascending-order selection sort
                          on array. The parameter size holds the number of elements
                          in the array.
                     */


void selectionSort(int array[], int size)
{
  int startScan, minIndex, minValue;
  for (startScan = 0; startScan < (size - 1); startScan++)
  {
    minIndex = startScan;
    minValue = array[startScan];
    for (int index = startScan + 1; index < size; index++)
    {
      if (array[index] < minValue)
      {
        minValue = array[index];
        minIndex = index;
      }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
  }
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
