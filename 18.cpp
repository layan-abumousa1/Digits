#include <iostream>
using namespace std;

int main()
{
    long long  x = 11111010111101;
    int c = 0, cmax = 0;
	while (x)
	{
		int d = x % 10;
		if (d==1)
		{
			c++;
			if (c > cmax)
			{
				cmax = c;
			}
		}
		else {
			
			c = 0;
		}
		x /= 10;
	}

	cout <<"The longest sequence of 1s in the binary representation: "<< cmax;


}