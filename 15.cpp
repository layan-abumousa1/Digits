#include <iostream>
using namespace std;

int main()
{
    int x = 3478912;
    int sorted = 0;
    int y = x;
    cout << "Before Sorting : " << x << endl;
    for (int i = 0; i <= 9; i++)
    {
        while (x)
        {
            int d = x % 10;
            if (d == i)
                sorted = sorted * 10 + i;
            x /= 10;
        }
        x = y;
    }
    cout <<"After Sorting : " << sorted;
}