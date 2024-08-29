#include <iostream>

using namespace std;

int main()
{
	int x = 2341;
	int sum = 0;

	while (x)
	{
		int d = x % 10;
		sum += d;
		x /= 10;
	}
	cout << "Sum of Digits = " << sum;
}