#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number?\n";
    cin >> Number;
    return Number;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void AddElementInArray(int Number, int arr[100], int &arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
    
}

bool IsAddMore(int arrLength)
{
    int add;
    cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
    cin >> add;
    if (add == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int nubmer;
    int arrLength = 0;
    int arr[100];

    while (true)
    {
        nubmer = ReadNumber();
        if (IsAddMore(arrLength) == true)
        {
            AddElementInArray(nubmer, arr, arrLength);
        }
        else 
            break;
    }
    AddElementInArray(nubmer, arr, arrLength);
    cout << "\nArray Length: " << arrLength << endl;
    cout << "Array elements: ";
    PrintArray(arr, arrLength);
    
    
    

    return 0;
}














#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number? ";
    cin >> Number;
    return Number;
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void InputUserNumbersInArray(int arr[100], int &arrLength)
{
    bool AddMore = true;
    do
    {
        AddArrayElement(ReadNumber(), arr, arrLength);
        cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
        cin >> AddMore;
    } while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[100];
    int arrLength = 0;

    InputUserNumbersInArray(arr, arrLength);

    cout << "\nArray Length: " << arrLength << endl;
    cout << "Array elements: ";
    PrintArray(arr, arrLength);

    return 0;
}
