// ========================================MY Code========================================
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enOddEven { Odd= 1, Even = 2 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
    
}

void PrintNumbersOfArray(int arr[100], int arrLength)
{
    cout << "\nNumbers in the array are:\n";
    for (int i = 0; i < arrLength; i++)
    {
            cout << arr[i] << " ";
    }

}

int OddCount(int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] % 2 != 0 )
        {
            count++;
        }
    }
    return count;
    
}



int main()
{
    int arr[100];
    int arrLength = 0;
    srand((unsigned)time(NULL));
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintNumbersOfArray(arr, arrLength);
    cout << "\n\n";
    cout << "The number of odd numbers in the array is: " << OddCount(arr, arrLength) << endl;
}
