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

float MyCeil(float Number)
{

    if (abs(getFractionalPart(Number)) > 0)
    {
        if (Number > 0)
        {
            return int(Number) + 1;
        }
        else
        {
            return int(Number);
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
    cout << "C++ Round Result: " << ceil(Number) << endl;
    cout << "My Round Result: " << MyCeil(Number) << endl;
    return 0;
}
