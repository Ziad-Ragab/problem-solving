#include <iostream>
#include <string>
using namespace std;
void read3Nums(int& num1, int& num2, int& num3)
{
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
}

int calculateSum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

void printSum(int sum)
{
    cout << "The sum of the three numbers is: " << sum << endl;
}
int main()
{
    int num1, num2, num3;
    read3Nums(num1, num2, num3);
    int sum = calculateSum(num1, num2, num3);
    printSum(sum);
    return 0;
}