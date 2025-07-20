#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float readA()
{
    float A;
    cout << "Enter A : ";
    cin >> A;
    return A;
}
float calcCircleAreaInscribedSquarre(float A)
{
    const float PI = 3.14159;
    float area = (PI * pow(A, 2)) / 4;
    return area;
}
void printArea(float area)
{
    cout << "The area of the circle is " << area << endl;
}
int main()
{
    float A;
    printArea(calcCircleAreaInscribedSquarre(readA()));
    return 0;
}