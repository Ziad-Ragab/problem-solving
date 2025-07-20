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


int PrintSumEvenFrom1toN_UsingFor(int Num)
{

    int Sum = 0;

    for (int Counter = 0; Counter <= Num; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
        
    }

    return Sum;

}

int PrintSumEvenFrom1toN_UsingWhile(int Num)
{
    int Sum = 0;
    int Counter = 0;
    while (Counter < Num)
    {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
        
    }
    

    return Sum;
    

}



int main() {
    int N = ReadNum();
    cout << PrintSumEvenFrom1toN_UsingFor(N);
    cout << PrintSumEvenFrom1toN_UsingWhile(N);
    return 0;
}