#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readNum()
{
    float num;
    cout << "Enter the first number: ";
    cin >> num;
    return num;
}
float calcCircleArea(float radius)
{
    const float PI = 3.14159;
    float area = PI * pow(radius, 2);
    return area;
}
void printArea(float area)
{
    cout << "The area of the circle is " << area << endl;
}
int main()
{
    float radius;
    printArea(calcCircleArea(readNum()));
    return 0;
}