#include <iostream>

using namespace std;

enum enOperationtype {Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

float ReadNumber(string Message)
{
    float Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

enOperationtype ReadOptType()
{
    char OT = '+';
    cout << "Please enter the operation type" << endl;
    cin >> OT;
    return (enOperationtype)OT;
}

float Calculate(float Number1, float Number2, enOperationtype OpType)
{
    switch (OpType)
    {
    case enOperationtype::Add :
        return Number1 + Number2;
    case enOperationtype::Divide :
        return Number1 / Number2;
    case enOperationtype::Multiply :
        return Number1 * Number2;
    case enOperationtype::Subtract :
        return Number1 - Number2;
    default :
        return Number1 + Number2;
    }
}
int main()
{
    float Number1 = ReadNumber("Please enter Number 1 ?");
    float Number2 = ReadNumber("Please enter Number 2 ?");

    float Result = Calculate(Number1, Number2,ReadOptType());
    cout << "the result is " << Result << endl;
}
