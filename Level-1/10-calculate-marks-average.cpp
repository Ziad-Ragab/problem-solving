#include <iostream>
using namespace std;
void read3Marks(int &mark1, int &mark2, int &mark3) {
    cout << "Enter the first mark: ";
    cin >> mark1;
    cout << "Enter the second mark: ";
    cin >> mark2;
    cout << "Enter the third mark: ";
    cin >> mark3;
}
int calculateSum(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}
float calculateAverage(int mark1, int mark2, int mark3) {
    return (float)calculateSum(mark1, mark2, mark3) / 3;
}

void printAverage(int average) {
    cout << "The average of the three marks is: " << average << endl;
}

int main() {
    int mark1, mark2, mark3;
    read3Marks(mark1, mark2, mark3);
    int average = calculateAverage(mark1, mark2, mark3);
    printAverage(average);
    return 0;
}