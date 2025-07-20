#include <iostream>
#include <string>
using namespace std;
enum enPassFail
{
    Pass = 1,
    Fail = 0
};
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

float calculateAverage(int num1, int num2, int num3)
{
    
    return (float)calculateSum(num1, num2, num3) / 3;
    
}

enPassFail checkGrade(float average)
{
    if (average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void pirntGrade(float average)
{
    string result = "The grade for " + to_string(average) + " is ";
    if (checkGrade(average) == Pass)
        result += "Passed";
    else
        result += "Failed";
    cout << result << endl;
}
int main()
{
    int num1, num2, num3;
    read3Nums(num1, num2, num3);
    int average = calculateAverage(num1, num2, num3);
    pirntGrade(average);
    return 0;
}