#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void CreateRandomArray(int arr[100], int &arrLength, int From, int To) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber( From, To);
    }
    cout << endl;
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength;
    CreateRandomArray(arr, arrLength,0, 100);
    cout << "Array Elements: ";
    PrintArray(arr, arrLength);

    return 0;
}











#include <iostream>
using namespace std;

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

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    
    cout << "\n";
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    return 0;
}
