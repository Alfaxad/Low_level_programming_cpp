// a simple c++ program

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <cctype>

using namespace std;

#define PI 3.14159
int main() {

    char ch;
    std::cout << "This program is paused, press Enter to continue" << '\n';
    ch = cin.get();
    std::cout << "Thank you" << '\n';

  string movieTitle = "Cherry";
  std::cout << "The movie title is " << movieTitle << '\n';
  std::cout << "Programming is super fun" << '\n';
  int apples = 7;
  std::cout << apples << '\n';

// random numbers concept

  unsigned seed;
  int num1, num2, num3;

  std::cout << "Enter seed value" << '\n';
  std::cin >> seed;

  // set random generator seed
  srand(seed);

  // generate and print 3 random numbers
  num1 = rand();
  num2 = rand();
  num3 = rand();

  std::cout << num1 << "       " << num2 << "      "<< num3 << '\n';


// isalpha() function from the cctype checks if a character is an alphabet, here is an example

  std::cout << "Is 'X' an alphabet character ?   " << isalpha('X')  << '\n';


  // Classes tutorial

  class Circle
  {
  private:
    double radius;
    double diameter;
  public:
    void setRadius(double r)
    { radius = r;}
    double getArea()
    { return PI * pow(radius, 2);}

  };

  Circle circle1;
  circle1.setRadius(2);

  std::cout << "The area of the circle is  " << circle1.getArea() << '\n';


  // Below is how you define a member function outside a Classes
  void Circle::setDiameter(double d)
  {
    diameter = d;
  }


  // partial array initialization
  int numbers[7] = {1,2,3,4}
  
  return 0;
}
