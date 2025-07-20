// ========================================MY Code========================================
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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
    cout << "\nPrime Numbers in the array are:\n";
    for (int i = 0; i < arrLength; i++)
    {
            cout << arr[i] << " ";
    }

}

void CopyPrimeNumbersOfArray(int arr[100], int arrLength, int arr2[100], int &arr2Lenth)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arr[i] ) == enPrimeNotPrime::Prime)
        {
            arr2[arr2Lenth] = arr[i];
            arr2Lenth++;
        }
        
    }



    
    
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arr2[100];
    int arr2Lenth = 0;
    int arrLength = 0;
    srand((unsigned)time(NULL));
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintNumbersOfArray(arr, arrLength);
    CopyPrimeNumbersOfArray(arr, arrLength, arr2, arr2Lenth);
    PrintNumbersOfArray(arr2, arr2Lenth);
    cout << "\n\n";


}

// ========================================Abu-Hadhood Code========================================
// #include <iostream>
// using namespace std;


// enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

// enPrimNotPrime CheckPrime(int Number)
// {
//     int M = round(Number / 2);
//     for (int Counter = 2; Counter <= M; Counter++)
//     {
//         if (Number % Counter == 0)
//             return enPrimNotPrime::NotPrime;
//     }
//     return enPrimNotPrime::Prime;
// }

// int RandomNumber(int From, int To)
// {
//     int randNum = rand() % (To - From + 1) + From;
//     return randNum;
// }

// void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
// {
//     cout << "\nEnter number of elements:\n";
//     cin >> arrLength;
//     for (int i = 0; i < arrLength; i++)
//         arr[i] = RandomNumber(1, 100);
// }

// void PrintArray(int arr[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//         cout << arr[i] << " ";
//     cout << "\n";
// }

// void AddArrayElement(int Number, int arr[100], int &arrLength)
// {
//         arrLength++;
//         arr[arrLength - 1] = Number;
// }

// void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
// {
//     for (int i = 0; i < arrLength; i++)
//     {
//         if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
//         {
//             AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
//         }
//     }
// }

// int main() {
//     srand((unsigned)time(NULL));
    
//     int arr[100];
//     int arrLength = 0;
//     int arr2[100];
//     int arr2Length = 0;
    
//     FillArrayWithRandomNumbers(arr, arrLength);
//     CopyPrimeNumbers(arr, arr2, arrLength, arr2Length);
    
//     cout << "\nArray 1 elements:\n";
//     PrintArray(arr, arrLength);
    
//     cout << "\nArray 2 Prime numbers:\n";
//     PrintArray(arr2, arr2Length);
    
//     return 0;
// }
