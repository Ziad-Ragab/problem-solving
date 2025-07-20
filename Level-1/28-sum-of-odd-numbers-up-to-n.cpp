#include <iostream>
#include <string>
using namespace std;

enum enOddOrEven { Odd  = 1, Even = 2};

int ReadNum()
{
    int Num;
    cout << "Enter the num ";
    cin >> Num;
    return Num;
}

enOddOrEven CheckOddOrEven(int Num)
{
    if (Num % 2 != 0)
        return enOddOrEven::Odd;
    else
    return enOddOrEven::Even;
    
}


int PrintSumFrom1toN_UsingFor(int Num)
{

    int Sum = 0;

    for (int Counter = 0; Counter <= Num; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
        
    }

    return Sum;

}


int main() {
    int N = ReadNum();
    cout << PrintSumFrom1toN_UsingFor(N);
    return 0;
}