#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimNotPrime {Prime = 1, NotPrime = 2};



float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << endl << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
    
}

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number /2);

    for (int  Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
        {
            return enPrimNotPrime::NotPrime;
        }

    }

    return enPrimNotPrime::Prime;

}

void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimNotPrime::Prime :
        cout << "The number is Prime\n";
        break;
    case enPrimNotPrime::NotPrime :
        cout << "The number is Not prime\n";
        break;
    }
}

int main()
{
    PrintNumberType(ReadPositiveNumber("Check your number is prime or not ?"));
    return 0;
}