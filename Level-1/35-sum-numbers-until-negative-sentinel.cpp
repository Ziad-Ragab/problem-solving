#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message)
{
    float Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

float SumNumbers()
{
    int Sum = 0;
    int Counter = 1;
    float Number = 0;
    do
    {
        Number = ReadNumber("Please enter Number " + to_string(Counter));
        if (Number == -99)
        {
            break;
        }
        
        Sum += Number;
        Counter++;
        
    } while (Number != -99);

    return Sum;
    
}

int main()
{
    cout << endl << "Result  = " << SumNumbers() << endl;
    //  float result = SumNumbers(); // نفذ الدالة الأول وخزن النتيجة
    // cout << endl << "Result  = " << result << endl; // اطبع النتيجة بعد التنفيذ
}