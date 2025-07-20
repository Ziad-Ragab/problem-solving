#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

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

std::vector<int> InputArrayElements(int number)
{
    int counter = 0;
    std::vector<int> arrnum(number);
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < number; i++)
    {
        counter++;
        cout << "Element[" << counter << "] :";
        arrnum[i] = {ReadPositiveNumber("")};
    }
    return arrnum;
}

void PrintArrayElements(int number, std::vector<int> myArray)
{
    cout << "Original array: " << endl;
    for (int i = 0; i < number; i++)
    {
        cout << myArray[i] << " " ;
    }
    
}

void CheckNumber(std::vector<int> myArray, int checkedNumber)
{
    int counter = 0;
    ;
    for (int i = 0; i < myArray.size(); i++)
    {
        if (myArray[i] == checkedNumber)
        {
            counter++;
        }
    }
    cout << endl <<  checkedNumber << " is repeated " << counter << " time(S) " << endl;
}




int main()
{
    int number = ReadPositiveNumber("");
    std::vector<int> myArray = InputArrayElements(number);
    int checkedNumber = ReadPositiveNumber("Enter the number you want to check: ");
    PrintArrayElements(number, myArray);
    CheckNumber(myArray, checkedNumber);
    return 0;
}


















#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void ReadArray(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++) {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int TimesRepeated(int Number, int arr[100], int arrLength) {
    int count = 0;
    for (int i = 0; i <= arrLength - 1; i++) {
        if (Number == arr[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[100];
    int arrLength;
    int NumberToCheck;

    ReadArray(arr, arrLength);
    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
    
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);
    
    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

    return 0;
}












