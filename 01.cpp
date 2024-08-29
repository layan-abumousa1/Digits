#include <iostream>

using namespace std;

int main()
{
    int x = 2341;
    int c = 0; 
	while (x)
	{
		c++;
		x /= 10;
	}
	cout << c; 
} 