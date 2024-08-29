#include <iostream>
using namespace std;

int main()
{
    int x = 1234567;
    int evens = 0, odds = 0;
    int c = 0;
    while (x)
    {
        int d = x % 10;
        if (d % 2 == 0)
        {
            evens = evens * 10 + d;
            c++;
        }
        else
            odds = odds * 10 + d;
        x /= 10;
    }
    odds = odds * pow(10, c) + evens;
    cout << odds;
}