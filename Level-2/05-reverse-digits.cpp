#include <iostream>
using namespace std;

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

void PrintDigits(int Number)
{
    int reminder = 0;
    while (Number > 0)
    {
        reminder = Number % 10;
        cout << reminder;
        Number = Number / 10;
    }
}
int main()
{
    // int Number = ReadPositiveNumber("Enter a positive number: ");
    PrintDigits(ReadPositiveNumber("Enter a positive number: "));
    return 0;
}