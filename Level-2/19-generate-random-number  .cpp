#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    int randum = rand() % (To - From + 1) + From;
    return randum;
}

int main()
{
    srand((unsigned)time(NULL));
    cout << RandomNumber(20, 50) << endl;
    cout << RandomNumber(20, 50) << endl;
    cout << RandomNumber(20, 50) << endl;

    return 0;
}
