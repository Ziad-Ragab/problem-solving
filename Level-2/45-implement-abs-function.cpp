// ========================================MY Code========================================
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number? ";
    cin >> Number;
    return Number;
}

int MyAbs(int Number)
{
    int count = 0;
    for (int i = Number; i < 0; i++)
    {
        count++;
    }
    return count;
    
}
int main()
{
    int Number = ReadNumber();
    cout << "\nC++ abs Result: " << abs(Number) << endl;
    cout << "\nMy abs Result: " << MyAbs(Number) << endl;
    return 0;
}
