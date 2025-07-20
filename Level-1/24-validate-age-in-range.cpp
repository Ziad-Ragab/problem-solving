#include <iostream>
#include <string>

using namespace std;

int ReadAge()
{
    int Age;
    cout << "Please enter your Age ? " << endl;
    cin >> Age;

    return Age;

}

bool ValidateNumberInRange(int Number, int Form, int To)
{
    return (Number >= Form && Number <= To);
}

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout << Age << " is a valid age \n";
    else
        cout << Age << " is a invalid age \n";
    
}

int main()
{
    PrintResult(ReadAge());
    
    return 0;
}