#include <iostream>
#include <string>
using namespace std;
enum Grade
{
    Pass = 1,
    Fail = 0
};
int readMark()
{
    int mark;
    cout << "Enter a mark: ";
    cin >> mark;
    return mark;
}

Grade checkGrade(int mark)
{
    if (mark >= 50)
        return Grade::Pass;
    else
        return Grade::Fail;
}

string calculateGrade(int mark)
{
    if (checkGrade(mark) == Pass)
        return "Passed";
    else
        return "Failed";
}

void printGrade(int mark)
{
    string result = "The grade for " + to_string(mark) + " is " + calculateGrade(mark);
    cout << result << endl;
}
int main() 
{
    printGrade(readMark());
    return 0;
}