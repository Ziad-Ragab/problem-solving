#include <iostream>
#include <string>
using namespace std;
void readNums(int& num1, int& num2, int& num3)
{
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
}
int maxNum(int num1, int num2, int num3)
{
    if (num1 > num2)
        if(num1 > num3)
            return num1;
        else
            return num3;
    else
        if(num2 > num3)
            return num2;
        else
            return num3;
}
void printMax(int Max)
{
    cout << "The maximum number " << " is " << Max << endl;
}
int main()
{
    int num1, num2, num3;
    readNums(num1, num2, num3);
    printMax(maxNum(num1, num2, num3));
      return 0;
}