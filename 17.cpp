#include <iostream>
using namespace std;

int main()
{
    int x = 6341258;
    int i = 3;
    int res =  x / (int)pow(10, i + 1) * pow(10, i) + x % (int)pow(10, i);
    cout <<"After deleteting : "<< res;
}
