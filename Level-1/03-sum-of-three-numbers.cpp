#include <iostream>
using namespace std;
void readNums(int& num1,int& num2,int& num3)
{
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
}
int calculateSum(int num1,int num2,int num3)
{
    return num1 + num2 + num3;
}
void printSum(int sum)
{
    cout << "The sum of the three numbers is: " << sum << endl;
}

int main() {
    int num1,num2,num3,sum;
    readNums(num1,num2,num3);
    sum = calculateSum(num1,num2,num3);
    printSum(sum);
    return 0;
}