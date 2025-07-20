#include <iostream>
using namespace std;


void ArraywithHardCode(int arr[100], int &arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
        arrLength++;
        arr[arrLength - 1] = Number;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void CopyDistinctNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, arrDestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
    }
}

int main() {
    srand((unsigned)time(NULL));
    
    int arr[100];
    int arrLength = 0;
    int arr2[100];
    int arr2Length = 0;
    
    ArraywithHardCode(arr, arrLength);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);
    CopyDistinctNumbers(arr, arr2, arrLength, arr2Length);
    cout << "\nArray 2 distinct elements:\n";
    PrintArray(arr2, arr2Length);    
    return 0;
}
// // ==============================AbuHadhood Code ===========================

// #include <iostream>
// using namespace std;

// void FillArray(int arr[100], int &arrLength)
// {
//     arrLength = 10;
//     arr[0] = 10;
//     arr[1] = 10;
//     arr[2] = 10;
//     arr[3] = 50;
//     arr[4] = 50;
//     arr[5] = 70;
//     arr[6] = 70;
//     arr[7] = 70;
//     arr[8] = 70;
//     arr[9] = 90;
// }

// void PrintArray(int arr[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//         cout << arr[i] << " ";
//     cout << "\n";
// }

// short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//     {
//         if (arr[i] == Number)
//             return i;
//     }
//     return -1;
// }

// bool IsNumberInArray(int Number, int arr[100], int arrLength)
// {
//     return FindNumberPositionInArray(Number, arr, arrLength) != -1;
// }

// void AddArrayElement(int Number, int arr[100], int &arrLength)
// {
//     arrLength++;
//     arr[arrLength - 1] = Number;
// }

// void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DestinationLength)
// {
//     for (int i = 0; i < SourceLength; i++)
//     {
//         if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
//         {
//             AddArrayElement(arrSource[i], arrDestination, DestinationLength);
//         }
//     }
// }

// int main()
// {
//     int arrSource[100], SourceLength = 0;
//     int arrDestination[100], DestinationLength = 0;

//     FillArray(arrSource, SourceLength);
//     CopyDistinctNumbersToArray(arrSource, arrDestination, SourceLength, DestinationLength);

//     cout << "Array Source Elements:\n";
//     PrintArray(arrSource, SourceLength);

//     cout << "Array Destination (Distinct Elements):\n";
//     PrintArray(arrDestination, DestinationLength);

//     return 0;
// }
