#include <iostream>
using namespace std;

int main()
{
    int x = 57129;
    int y = x;
    int max = 0 , min = 9;
    int i = 0,imax = 0, imin = 0;

    while (x)
    {
        i++;
        int a = x % 10;
        if (a > max)
        {
            max = a;
            imax = i;
        }
        if (a < min)
        {
            min = a;
            imin = i;
        }
        x /= 10;
    }
    x = y;
    x = x - max * pow(10, imax-1);
    x = x - min * pow(10, imin-1);
    x = x + max * pow(10, imin-1);
    x = x + min * pow(10, imax-1);

    cout <<"After Swapping max digit with min  " << x;
}