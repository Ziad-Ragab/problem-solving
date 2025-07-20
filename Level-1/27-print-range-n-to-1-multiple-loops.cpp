#include <iostream>
#include <string>
using namespace std;
int ReadNum()
{
    cout << "Enter you num ";
    int Num;
    cin >> Num;
    return Num;
}

void PrintRangeFromNto1_UsingWhile(int N)
{
    int Counter = N + 1;

    while (Counter > N)
    {
        Counter--;
        std::cout << Counter << std::endl;
    }

    std::cout << "Range printed using While Statement:\n";

    
}

void PrintRangeFromNto1_UsingDoWhile(int N)
{
    int Counter = N + 1;

    cout << "Range printed using While Statement:\n";

    do
    {
        Counter--;
        cout << "Range printed using Do While Statement:\n";
    } while (Counter > N);
    
}
void PrintRangeFromNto1_UsingFor(int N)
{

    cout << "Range printed using While Statement:\n";

    for (int Counter = N; Counter >= 1; Counter--)
    {
        cout << Counter << endl;
    }
    
}
int main() {

    int N = ReadNum();
    PrintRangeFromNto1_UsingDoWhile(N);
    PrintRangeFromNto1_UsingDoWhile(N);
    PrintRangeFromNto1_UsingFor(N);

    return 0;
}