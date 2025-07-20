// #include <iostream.h>
// #include <string>
// #include <cmath>
// using namespace std;
// void readNums(float& num1, float& num2)
// {
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;
// }
// float calcRectangleBySideAndDiagonal(float side, float diagonal)
// {
//     float Area = side * sqrt(pow(diagonal, 2) - pow(side, 2));
//     return Area;
// }
// void printArea(float  area)
// {
//     cout << "The area of the rectangle is " << area << endl;
// }
// int main()
// {
//     float side, diagonal;
//     readNums(side, diagonal);
//     printArea(calcRectangleBySideAndDiagonal(side, diagonal));
//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[10];
    cout << sizeof(ptr);
}