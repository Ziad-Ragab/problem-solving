// #include <iostream>
// #include <string>
// #include <cstdlib>

// using namespace std;

// int ReadPositiveNumber(string Message)
// {
//     int n = 0;
//     do
//     {
//         cout << Message << endl;
//         cin >> n;
//     } while (n <= 0);
//     return n;
// }

// int RandomNumber(int From, int To)
// {
//     int randum = rand() % (To - From + 1) + From;
//     return randum;
// }

// void GenerateKey(int number)
// {
//     int counter = 0;
//     for (int i = 0; i < number; i++)
//     {
//         counter++;
//         cout << "Key [" << counter << "] : ";
//         for (int i = 0; i < 4; i++)
//         {
//             cout << char(RandomNumber(65, 90));
//             cout << char(RandomNumber(65, 90));
//             cout << char(RandomNumber(65, 90));
//             cout << char(RandomNumber(65, 90));
//             if (i < 3)
//             {            
//                 cout << "-";
//             }
//         }
//         cout << endl;
//     }
    

    
// }



// int main()
// {
//     srand((unsigned)time(NULL));
//     GenerateKey(ReadPositiveNumber("Enter the number of keys"));

//     return 0;
// }






















#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enCharType { 
    SamallLetter = 1,    
    CapitalLetter = 2,   
    SpecialCharacter = 3,
    Digit = 4            
};

int RandomNumber(int From, int To)
{
    int randum = rand() % (To - From + 1) + From;
    return randum;
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
    int n = 0;
    do
    {
        cout << Message << endl;
        cin >> n;
    } while (n <= 0);    
    return n;
}    



string GenerateWorld(enCharType chartype, int length)
{
    string world;
    for (int i = 1; i <= length; i++)
    {
        world = world + GetRandomCharacter(chartype);
    }
    return world;
}

string GenerateKey()
{
    string Key = "";
    Key = GenerateWorld(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWorld(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWorld(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWorld(enCharType::CapitalLetter, 4);

    return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
    
}

int main()
{
    srand((unsigned)time(NULL));
    GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate? \n "));
    return 0;
}































// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

// int RandomNumber(int From, int To)
// {
//     int randNum = rand() % (To - From + 1) + From;
//     return randNum;
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

// string GenerateWord(enCharType CharType, short Length)
// {
//     string Word;
//     for (int i = 1; i <= Length; i++)
//     {
//         Word = Word + GetRandomCharacter(CharType);
//     }
//     return Word;
// }

// string GenerateKey()
// {
//     string Key = "";
//     Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
//     Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
//     Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
//     Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    
//     return Key;
// }

// void GenerateKeys(short NumberOfKeys)
// {
//     for (int i = 1; i <= NumberOfKeys; i++)
//     {
//         cout << "Key [" << i << "] : ";
//         cout << GenerateKey() << endl;
//     }
// }

// int main()
// {
//     srand((unsigned)time(NULL));
//     GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate? \n "));
//     return 0;
// }
