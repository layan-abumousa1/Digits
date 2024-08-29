#include <iostream>

using namespace std;

int main()
{
	int x = 2341;
	int reveesed = 0;

	while (x)
	{
		int d = x % 10;
		reveesed = reveesed * 10 + d;
		x /= 10;
	}
	cout << "Reversed Number  : " << reveesed;
}