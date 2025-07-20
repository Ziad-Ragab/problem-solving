#include <iostream>
#include <string>
using namespace std;
int readNum()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}
float calculateHalf(int num)
{
    return num / 2;
}
void printHalf(int num)
{
    string result = "Half of " + to_string(num) + " is " + to_string(calculateHalf(num));
    cout << result << endl;
}
int main() {
    printHalf(readNum());
    return 0;
}