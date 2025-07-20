#include <iostream>
using namespace std;

enum enPalindromeNotPalindrome
{
    Palindrome,
    NotPalindrome
};

void FillArray(int arr[100], int &arrLength)
{
    arrLength = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

enPalindromeNotPalindrome IsPalindrome(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] != arr[arrLength - i - 1])
        {
            return enPalindromeNotPalindrome::NotPalindrome;
        }
    }
    return enPalindromeNotPalindrome::Palindrome;
}

int main()
{
    int arr[100];
    int arrLength = 0;
    FillArray(arr, arrLength);
    cout << "\nArray Elements:\n";
    PrintArray(arr, arrLength);
    if (IsPalindrome(arr, arrLength) == enPalindromeNotPalindrome::Palindrome)
    {
        cout << "\nYes , it is a Palindrome array.\n";
    }
    else
        cout << "\nNo , it is NOT a Palindrome number.\n";

    return 0;
}
