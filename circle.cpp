//This program uses an array of objects
// Objects are instances of class Circle

#include <iostream>
#include <iomanip>
#include "circle.h" //needed to create circle objects


using namespace std;

const int NUM_CIRCLES = 4;

int main()
{
  Circle circle[NUM_CIRCLES]; //define an array of circle Objects

  //use loop to initialize radius of each objects
  for(int index = 0; index < NUM_CIRCLES; index++)
  {
    double r;
    std::cout << "Enter radius of circle " <<  (index+ 1) << ":  "<<'\n';
    std::cin >> r;
    circle[index].setRadius(r);
  }


  //use a loop to get out and print out the area of each objects
  std::cout << fixed << showpoint << setprecision(2);
  std::cout << "\n Here are the areas of " << NUM_CIRCLES << " circles."<< '\n';

  for (int index = 0; index < NUM_CIRCLES; index++) {
    std::cout << "circle" << (index + 1) << setw(8) << circle[index].findArea() <<'\n';
  }
  return 0;
}
