#include <iostream>
using namespace std;

int get(int x, int i) 
{
    return (x / (int)pow(10, i)) % 10;
}

int main() 
{
    int x = 6341258;
    int n = log10(x);
    for (int i = n; i > 0; i -= 2) 
    {
        x = x - (get(x, i) * (int)pow(10, i)) 
              + (get(x, i - 1) * (int)pow(10, i)) 
              - (get(x, i - 1) * (int)pow(10, i - 1)) 
              + (get(x, i) * (int)pow(10, i - 1));
    }

    cout <<"After swapping each pairs "<< x;
}
