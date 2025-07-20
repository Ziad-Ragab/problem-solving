#include <iostream>
#include <string>
using namespace std;
void readNums(int& num1, int& num2)
{
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
}
int maxNum(int num1, int num2)
{
if (num1 > num2)
    return num1;
else
    return num2;
}
void printMax(int Max)
{
    cout << "The maximum number " << " is " << Max << endl;
}
int main()
{
    int num1, num2;
    readNums(num1, num2);
    printMax(maxNum(num1, num2));
    return 0;
}