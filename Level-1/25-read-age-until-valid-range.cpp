#include <iostream>
using namespace std;
int ReadAge()
{
    int Age;
    cout << "Enter an Age: ";
    cin >> Age;
    return Age;
}
bool ValidateNumInRange(int Num, int From, int To)
{
      return (Num >= From && Num <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
    int Age =0;
    do
    {
        Age = ReadAge();
    } while (!ValidateNumInRange(Age, From, To));

    return Age;
    
}
void printSum(int Age)
{
    cout << "Your age is: " << Age << endl;
}

int main() {
    
    printSum(ReadUntilAgeBetween(18, 25));
    return 0;
}