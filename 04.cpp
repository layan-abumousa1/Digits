#include <iostream>
using namespace std;
int main()
{
    long long x = 1211263211;
    for (int i = 0; i <= 9; i++)
    {
        int c = 0;
        int y = x;
        while (y)
        {
            int d = y % 10;
            if (d == i)
                c++;
            y /= 10;
        }
        if (c != 0)
            cout << i << " : " << c << endl;
    }
}