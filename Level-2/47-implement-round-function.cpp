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

float getFractionalPart(float Number)
{
    float fractionalPart = Number - int(Number);

    return fractionalPart;
}

float MyRound(float Number)
{
    float fractionalPart = getFractionalPart(Number);
    if (abs(fractionalPart) >= 0.5)
    {
        if (Number > 0)
        {
            return int(Number) + 1;
        }
        else
        {
            return int(Number) - 1;
        }
    }
    else
    {
        return int(Number);
    }
}
int main()
{
    float Number = ReadNumber();
    cout << "C++ Round Result: " << round(Number) << endl;
    cout << "My Round Result: " << MyRound(Number) << endl;
    return 0;
}
