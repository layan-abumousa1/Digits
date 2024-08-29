#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i <= x/2; i++)
    {
        if (x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long x = 2351;

        while (x)
        {
            int d = x % 10;
            if (isPrime(d))
            {
                cout << d << "is Prime" << endl;
            }
            x /= 10;
        }
    
}