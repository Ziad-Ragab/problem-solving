#include <iostream>
#include <string>

using namespace std;
int ReadNum()
    {
        int Num;
        cout <<"Enter the num: ";
        cin >> Num;
        return Num;

    }

    void Power2_3_4(int Number)
    {
        int a,b,c;
        a = Number * Number;
        b = Number * Number * Number;
        c = Number * Number * Number * Number; 
        cout << a << " " << b << " " << c << endl;
    }

int main()
{
    Power2_3_4(ReadNum());
    return 0;
}