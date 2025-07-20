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

float MyFloor(float Number)
{
    if (Number > 0)
    {
        return int(Number);
    }
    else
    {
        return int(Number) - 1;
    }
    
}
int main()
{
    float Number = ReadNumber();
    cout << "C++ Round Result: " << floor(Number) << endl;
    cout << "My Round Result: " << MyFloor(Number) << endl;
    return 0;
}
