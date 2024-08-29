#include <iostream>
using namespace std;

int main()
{
    int x = 48246;
    int gcd = 1, y = x;
    for (int i = 9; i >= 1; i--)
    {
        bool f = true;
        x = y;
        while (x)
        {
            int d = x % 10;
            if (d % i != 0)
            {
                f = false;
                break;
            }
            x /= 10;
        }

        if (f)
        {
            gcd = i;
            break;
        }
    }
    cout << gcd;
}