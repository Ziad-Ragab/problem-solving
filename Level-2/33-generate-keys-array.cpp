#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
        case enCharType::SamallLetter:
            return char(RandomNumber(97, 122));
        case enCharType::CapitalLetter:
            return char(RandomNumber(65, 90));
        case enCharType::SpecialCharacter:
            return char(RandomNumber(33, 47));
        case enCharType::Digit:
            return char(RandomNumber(48, 57));
    }
    return '\0';
}

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

string GenerateWord(enCharType CharType, short Length)
{
    string Word;
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey()
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    
    return Key;
}


void FillArrayWithKeys(string arr[100], int arrLength)
{


    for (int i = 0; i < arrLength; i++)
        arr[i] = GenerateKey();
}

void PrintArray(string arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << "Array [" << i + 1 << "]: " << arr[i] << " " << endl;

    cout << "\n";
}



int main()
{
    srand((unsigned)time(NULL));
    int arrLength = ReadPositiveNumber("How many keys do you want to generate?\n");
    string arr[100];
    FillArrayWithKeys(arr, arrLength);
    PrintArray(arr, arrLength);

    return 0;
}






















// #include <iostream>
// using namespace std;

// enum enCharType { 
//     SamallLetter = 1,
//     CapitalLetter = 2,
//     SpecialCharacter = 3,
//     Digit = 4
// };

// int RandomNumber(int From, int To)
// {
//     return rand() % (To - From + 1) + From;
// }

// char GetRandomCharacter(enCharType CharType)
// {
//     switch (CharType)
//     {
//         case enCharType::SamallLetter:
//             return char(RandomNumber(97, 122));
//         case enCharType::CapitalLetter:
//             return char(RandomNumber(65, 90));
//         case enCharType::SpecialCharacter:
//             return char(RandomNumber(33, 47));
//         case enCharType::Digit:
//             return char(RandomNumber(48, 57));
//     }
//     return '\0';
// }

// void PrintStringArray(string arr[100], int arrLength)
// {
//     cout << "\nArray elements:\n\n";
//     for (int i = 0; i < arrLength; i++)
//     {
//         cout << "Array[" << i << "] : " << arr[i] << "\n";
//     }
//     cout << "\n";
// }

// string GenerateWord(enCharType CharType, short Length)
// {
//     string Word;
//     for (int i = 1; i <= Length; i++)
//     {
//         Word += GetRandomCharacter(CharType);
//     }
//     return Word;
// }

// string GenerateKey()
// {
//     string Key = "";
//     Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
//     Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
//     Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
//     Key += GenerateWord(enCharType::CapitalLetter, 4);
//     return Key;
// }

// void FillArrayWithKeys(string arr[100], int arrLength)
// {
//     for (int i = 0; i < arrLength; i++)
//         arr[i] = GenerateKey();
// }

// int ReadPositiveNumber(string Message)
// {
//     int Number = 0;
//     do
//     {
//         cout << Message << endl;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }

// int main() {
//     srand((unsigned)time(NULL));
    
//     string arr[100];
//     int arrLength = 0;
    
//     arrLength = ReadPositiveNumber("How many keys do you want to generate?\n");
    
//     FillArrayWithKeys(arr, arrLength);
    
//     PrintStringArray(arr, arrLength);
    
//     return 0;
// }
