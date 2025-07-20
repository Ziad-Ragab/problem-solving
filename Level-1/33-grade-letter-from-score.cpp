#include <iostream>
#include <string>

using namespace std;

int ReadNumberInRange(int From, int To)
{
    int Grade;
    do
    {
        cout << "Enter your grade: " << endl;
        cin >> Grade;
    } while (Grade < 0 || Grade > 100);

    return Grade;
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    char Grade = GetGradeLetter(ReadNumberInRange(0,100));
    cout << endl << "Result = " << Grade << endl;
    return 0;
}