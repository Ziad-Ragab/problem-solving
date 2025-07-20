#include <iostream>
#include <string>
using namespace std;
void readNums(float& num1, float& num2)
{
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
}
int calcRectangle(float length, float width)
{
    return length * width;
}
void printArea(float  area)
{
    cout << "The area of the rectangle is " << area << endl;
}
int main()
{
    float length, width;
    readNums(length, width);
    printArea(calcRectangle(length, width));
    return 0;
}