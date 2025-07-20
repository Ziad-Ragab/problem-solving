#include <iostream>
#include <string>
using namespace std;
int ReadNum()
{
    int Num;
    cin >> Num;
}

void PrintRangeFrom1toN_UsingWhile(int N)
{
    int Counter = 0;

    while (Counter < N)
    {
        Counter++;
        std::cout << Counter << std::endl;
    }

    std::cout << "Range printed using While Statement:\n";

    
}

void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int Counter = 0;

    cout << "Range printed using While Statement:\n";

    do
    {
        cout << "Range printed using Do While Statement:\n";
    } while (Counter < N);
    
}
void PrintRangeFrom1toN_UsingFor(int N)
{

    cout << "Range printed using While Statement:\n";

    for (int Counter = 1; Counter <= N; Counter++)
    {
        cout << Counter << endl;
    }
    
}
int main() {

    int N = ReadNum();
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);

    return 0;
}