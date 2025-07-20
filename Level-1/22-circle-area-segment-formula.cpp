#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;
void readnums(float &a, float&b)
{
    cout << "Enter A and B ";
    cin >> a;
    cin >> b;
}
int calcCircleArea(float a, float b)
{
    const float PI = 3.14;
    float Area = PI * (pow(b,2) / 4) * ((2 * a - b) / (2 * a + b));
    return Area;
}
void printCircleArea(float Area)
{
    cout << "The Area of circle is " << Area;
}
int main()
{
    float a, b;
    readnums(a,b);
    printCircleArea(calcCircleArea( a, b));
    return 0;
}