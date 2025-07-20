//Enter first name + last name = full name
#include <iostream>
using namespace std;
struct stInfo
{
    string firstName;
    string lastName;
};
stInfo readName(stInfo &name)
{
    cout << "Enter first name: ";
    cin >> name.firstName;
    cout << "Enter last name: ";
    cin >> name.lastName;
    return name;
}
string getFullname(stInfo name, bool reversed)
{
    string fullName = "";
    if (reversed)
        fullName = name.lastName + " " + name.firstName;
    else
        fullName = name.firstName + " " + name.lastName;

    return fullName;
}
void printName(string fullName)
{
    cout << "Full name: " << fullName << endl;
}

int main() {
    stInfo name;
    printName(getFullname(readName(name), 1));
    return 0;
}