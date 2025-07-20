#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readDiameter()
{
    float Diameter;
    cout << "Enter the Diameter: ";
    cin >> Diameter;
    return Diameter;
}
float calcCircleAreaThroughDiameter(float Diameter)
{
    const float PI = 3.14159;
    float area = (PI * pow(Diameter, 2)) / 4;
    return area;
}
void printArea(float area)
{
    cout << "The area of the circle is " << area << endl;
}
int main()
{
    float Diameter;
    printArea(calcCircleAreaThroughDiameter(readDiameter()));
    return 0;
}