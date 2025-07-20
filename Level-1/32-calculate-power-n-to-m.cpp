#include <iostream>
#include <string>

using namespace std;
int ReadNum()
    {
        int N;
        cout <<"Enter the num: ";
        cin >> N;
        return N;

    }

int ReadPower()
    {
        int M;
        cout <<"Enter the power: ";
        cin >> M;
        return M;

    }



int Power(int N, int M)
    {
        if (M == 0)
            return 1;
        
        int P = 1;

        for (int i = 1; i <= M; i++)
        {
            P = P * N;
        }
        return P;
        
        
    }

int main()
{
    cout << endl << "Result = " << Power(ReadNum(),ReadPower());
    return 0;
}