#include <iostream>
#include <string>
using namespace std;
void readTriangleData(float &a, float &b, float &c)
{
    cout << "Enter A and B and C";
    cin >> a;
    cin >> b;
    cin >> c;
}
float calcCircleArea(float a, float b, float c)
{
    const float PI = 3.14;
    float P;
    P = (a+b+c) / 2;

    float T;
    T = ((a*b*c)/(4*sqrt(P*(P-a)*(P-b)*(P-c))));

    float Area = PI * pow(T, 2);

    return Area;
}
void printCircleArea(float Area)
{
    cout << "The Area of circle is " << Area;
}

int main()
{
     float a, b, c;
    readTriangleData(a,b,c);
    printCircleArea(calcCircleArea( a, b, c));
    return 0;
}