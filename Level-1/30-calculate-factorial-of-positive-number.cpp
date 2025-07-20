#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNum(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
    
}

int Factorial(int Number)
{
    int F = 1;
    for (int  Counter = Number; Counter >= 1; Counter--)
    {
        F = F * Counter;
    }
    
    return F;
}


int main() {
    cout << Factorial(ReadPositiveNum("Enter Positive Num"));
    return 0;
}