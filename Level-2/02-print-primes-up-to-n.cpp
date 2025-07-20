#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message)
{
    int n = 0;
    do
    {
        cout << Message << endl;
        cin >> n;
    } while (n <= 0);
    return n;
}

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\n";
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;
    for (int  i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
        {
            cout << i << endl;
        }

    }
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Enter the number"));
    return 0;

}