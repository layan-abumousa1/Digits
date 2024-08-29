#include <iostream>
using namespace std;

int main()
{
	int x = 1221;
	int y = x;
	int reveesed = 0;

	while (x)
	{
		int d = x % 10;
		reveesed = reveesed * 10 + d;
		x /= 10;
	}
	x = y;
	if (reveesed==x)
	{
		cout << x << " Is Palindrome ";
	}
	else 
		cout << x << " Is not Palindrome ";


}