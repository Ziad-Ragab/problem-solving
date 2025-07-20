#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readNums(float& num1, float& num2)
{
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
}
float triangleArea(float base, float height)
{
    return 0.5 * base * height;
}
void printArea(float  area)
{
    cout << "The area of the triangle is " << area << endl;
}
int main()
{
    float base, height;
    readNums(base, height);
    printArea(triangleArea(base, height));
    return 0;
}