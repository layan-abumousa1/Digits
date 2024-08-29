#include <iostream>
using namespace std;

int main()
{
	int x = 12721;
	int max = 0;

	while (x)
	{
		int d = x % 10;
		if (d>max)
		{
			max = d;
		}	
		x /= 10;
	}

	cout << "Largest Digit is " << max;

}