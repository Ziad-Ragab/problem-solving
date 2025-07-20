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
void swapNums(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void printNums(int num1, int num2)
{
    cout << "The first number is " << num1 << endl;
    cout << "The second number is " << num2 << endl;
}
int main()
{
    int num1, num2;
    readNums(num1, num2);
    printNums(num1, num2);
    swapNums(num1, num2);
    printNums(num1, num2);
    return 0;

}