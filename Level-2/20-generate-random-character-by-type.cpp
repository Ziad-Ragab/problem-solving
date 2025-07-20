#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enInput { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};


int RandomNumber(int From, int To)
{
    int randum = rand() % (To - From + 1) + From;
    return randum;
}


char GetRandomInput(enInput input)
{
    switch (input)
    {

    case enInput::SmallLetter:
    {
        return char(RandomNumber(97, 122));
    }
    case enInput::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
    }
    case enInput::SpecialCharacter:
    {
        return char(RandomNumber(33, 47));
    }
    case enInput::Digit:
    {
        return char(RandomNumber(48, 57));
    }
}
return '\0';

}


int main()
{
    srand((unsigned)time(NULL));
    cout << GetRandomInput(enInput::CapitalLetter) << endl;
    cout << GetRandomInput(enInput::SmallLetter) << endl;
    cout << GetRandomInput(enInput::SpecialCharacter) << endl;
    cout << GetRandomInput(enInput::Digit) << endl;
    return 0;
}





















// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int RandomNumber(int From, int To)
// {
//     int randNum = rand() % (To - From + 1) + From;
//     return randNum;
// }

// enum enCharType { 
//     SamallLetter = 1,    
//     CapitalLetter = 2,   
//     SpecialCharacter = 3,
//     Digit = 4            
// };

// char GetRandomCharacter(enCharType CharType)
// {
//     switch (CharType)
//     {
//     case enCharType::SamallLetter:
//         return char(RandomNumber(97, 122));
//     case enCharType::CapitalLetter:
//         return char(RandomNumber(65, 90));
//     case enCharType::SpecialCharacter:
//         return char(RandomNumber(33, 47));
//     case enCharType::Digit:
//         return char(RandomNumber(48, 57));
//     }
// }

// int main()
// {
//     srand((unsigned)time(NULL));

//     cout << GetRandomCharacter(enCharType::SamallLetter) << endl;
//     cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
//     cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
//     cout << GetRandomCharacter(enCharType::Digit) << endl;

//     return 0;
// }
