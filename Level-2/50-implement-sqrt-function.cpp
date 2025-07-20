// ========================================MY Code========================================
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float Number;
    cout << "\nPlease enter a number? ";
    cin >> Number;
    return Number;
}


int MySqrt(int Number)
{
    return pow(Number, 0.5);
}
int main()
{
    float Number = ReadNumber();
    cout << "C++ squrt Result: " << sqrt(Number) << endl;
    cout << "My sqrt Result: " << sqrt(Number) << endl;
    return 0;
}
