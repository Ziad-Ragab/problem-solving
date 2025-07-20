#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
float readCircumference()
{
    float L;
   cout << "Please Enter the circumference ";
   cin >> L;
   return L;
}

float calcArea(float L)
{
    const float PI = 3.14;
    float Area = pow(L,2) / (4 * PI);
    return Area;
}

void printArea(float Area)
{
    cout << "The area of circle is " << Area;
}

int main()
{
    printArea(calcArea(readCircumference()));
    return 0;
}