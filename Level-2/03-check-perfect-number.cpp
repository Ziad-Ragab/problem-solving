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

void PrintResults(int Number)
{
    if (IsPerfect(Number))
    {
        cout << Number << " Is Perfect Number.\n";
    }
    else
    {
        cout << Number << " Is NOT Perfect Number.\n";
    }
}



int main()
{
    PrintResults(ReadPositiveNumber("Please enter a positive number ? "));
    return 0;

}