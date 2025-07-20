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

int RandomNumber(int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    
    cout << "\n";
}

void SumElementsOf2Array(int arr[100], int arr2[100],int arr3[100], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        arr3[i] = arr[i] + arr2[i];
    }
    
}


int main() {
    srand((unsigned)time(NULL));
    int arr[100];
    int arr2[100];
    int arr3[100];

    int arrLenth =ReadPositiveNumber("Enter number of elements:\n") ;
    FillArrayWithRandomNumbers(arr, arrLenth);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLenth);

    FillArrayWithRandomNumbers(arr2, arrLenth);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr2, arrLenth);

    SumElementsOf2Array(arr, arr2, arr3, arrLenth);
    cout << "\nSum of array1 and array2 elements:\n";
    PrintArray(arr3, arrLenth);


    return 0;
}































#include <iostream>
using namespace std;

int RandomNumber(int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrSum[i] = arr1[i] + arr2[i];
    }
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    
    cout << "\n";
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrSum[100];
    
    int arrLength = ReadPositiveNumber("How many elements ?\n");

    FillArrayWithRandomNumbers(arr, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);
    SumOf2Arrays(arr, arr2, arrSum, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements:\n";
    PrintArray(arr2, arrLength);

    cout << "\nSum of array1 and array2 elements:\n";
    PrintArray(arrSum, arrLength);

    return 0;
}

