#include <iostream>
using namespace std;

int main()
{
    int x = 123456;
    int length = (int)log10(x) + 1; 
    int last = x % 10;
    x /= 10;
    int y = last * pow(10, length - 1);
    x = y + x;
    cout <<"After rotate : " << x;
}
