
// ===========================My Code ===========================
// #include <iostream>
// using namespace std;
// int ReadNumber()
// {
//     int Number;
//     cout << "\nPlease enter a number? ";
//     cin >> Number;
//     return Number;
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

// void AddArrayElement(int arr[100], int arr2[100], int &arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//     {
//         arr2[arrLength - i - 1] = arr[arrLength - i - 1];
//     }
    
// }


// void PrintArray(int arr[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//         cout << arr[i] << " ";
//     cout << "\n";
// }


// int main()
// {
//     srand((unsigned)time(NULL));
//     int arr[100];
//     int arr2[100];
//     int arrLength;
//     FillArrayWithRandomNumbers(arr, arrLength);
//     cout << "Array 1 elements:" << endl;
//     PrintArray(arr, arrLength);
//     cout << "Array 2 elements after copy:" << endl;
//     AddArrayElement(arr, arr2, arrLength);
//     PrintArray(arr2, arrLength);
//     return 0;
// }

// ============================My Clean Code ===========================
#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number? ";
    cin >> Number;
    return Number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void CopyArrayUsingAddArrayElement(int arr[100], int arrLength, int arr2[100], int &arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
        AddArrayElement(arr[i], arr2, arr2Length);
    }
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}



int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arr2[100];
    int arrLength = 0;
    int arr2Length = 0;
    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "Array 1 elements:" << endl;
    PrintArray(arr, arrLength);
    cout << "Array 2 elements after copy:" << endl;
    CopyArrayUsingAddArrayElement(arr, arrLength, arr2, arr2Length);
    PrintArray(arr2, arr2Length);
    return 0;
}












// ============================AbuHadhood  Code ===========================
#include <iostream>
using namespace std;

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
        arr[i] = RandomNumber(1, 100);
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

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
        AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    int arr2Length = 0;

    CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}





