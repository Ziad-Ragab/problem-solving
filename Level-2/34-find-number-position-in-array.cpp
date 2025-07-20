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


void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    
    cout << "\n";
}


int PositionofNumberInArray(int number, int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == number)
        {
            return i;
        }
    }
    return 0;
    
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int position;
    int arrLength = ReadPositiveNumber("How many elements ?\n");

    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    int number = ReadPositiveNumber("Please enter a number to search for ?\n");
    cout << "Number you are looking for is: " << number << endl;

    position = PositionofNumberInArray(number, arr, arrLength);

    if (position == 0)
    {
        cout << "The number is not found ";
        return 0;
    }
    else 
    {
        cout << "The number found at position: " << position << endl;
        cout << "The number found its order: " << position + 1 << endl;
    }
    return 0;
}































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

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }
    
    return -1;
}

int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];   
    int arrLength;  

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    int Number = ReadNumber();
    cout << "\nNumber you are looking for is: " << Number << endl;

    short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);

    if (NumberPosition == -1)
        cout << "The number is not found :-(\n";
    else
    {
        cout << "The number found at position: " << NumberPosition << endl;
        cout << "The number found its order  : " << NumberPosition + 1 << endl;
    }

    return 0;
}

