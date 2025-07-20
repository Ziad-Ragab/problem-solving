#include <iostream>
using namespace std;

enum enPerfectNotPerfect { Perfect = 1, NotPerfect = 2 };


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

 bool IsPerfect(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number ; i++)
    {
        if (Number % i == 0)
        {
            Sum = Sum + i;
        }
    }
    return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
    cout << "\n";
    cout << "Perfect Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;
    for (int  i = 1; i <= Number; i++)
    {
        if (IsPerfect(i))
        {
            cout << i << endl;
        }

    }
}



int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ? "));
    return 0;

}