#include <iostream>
using namespace std;

int max(int x)
{
    int max = x % 10;
    while (x)
    {
        if (x % 10 > max)
            max = x % 10;
        x /= 10;
    }
    return max;
}

int main()
{
    int x = 73252412;
    while (x)
    {
        int d = x % 1000;
        cout << max(d) << endl;
        x /= 1000;
    }
}