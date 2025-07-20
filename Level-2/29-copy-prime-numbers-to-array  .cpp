#include <iostream>
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

int RandomNumber(int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void CopyPrimeArray(int arrSource[100], int arrDestination[100], int arrLength, int &arr2Length) {
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
        {
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }
    arr2Length = --counter;
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    
    cout << "\n";
}





int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int arr2Length;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyPrimeArray(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nPrime Numbers in Array 2 :\n";
    PrintArray(arr2, arr2Length);

    return 0;
}

















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

// void FillArray(int arr[100], int &arrLength)
// {
//     cout << "\nEnter number of elements:\n";
//     cin >> arrLength;
    
//     for (int i = 0; i < arrLength; i++)
//         arr[i] = RandomNumber(1, 100);
// }

// void CopyOnlyPrimaryNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arr2Lenght)
// {
//     int Counter = 0;
    
//     for (int i = 0; i < arrLength; i++)
//     {
//         if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
//         {
//             arrDestination[Counter] = arrSource[i];
//             Counter++;
//         }
//     }
    
//     arr2Lenght = --Counter;
// }

// void PrintArray(int arr[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//         cout << arr[i] << " ";
    
//     cout << "\n";
// }

// int main() {
//     srand((unsigned)time(NULL));

//     int arr[100];
//     int arrLength;
    
//     FillArray(arr, arrLength);

//     int arr2[100];
//     int arr2Length = 0;
    
//     CopyOnlyPrimaryNumbers(arr, arr2, arrLength, arr2Length);

//     cout << "\nArray 1 elements:\n";
//     PrintArray(arr, arrLength);

//     cout << "\nPrime Numbers in Array2:\n";
//     PrintArray(arr2, arr2Length);

//     return 0;
// }
