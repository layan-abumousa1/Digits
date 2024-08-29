#include <iostream>
using namespace std;

int main()
{
	long long binary = 101;
	int decimal = 0;
	int i = 0;

	while (binary)
	{
		int d = binary % 10;
		decimal += (d * pow(2, i));
		i++;
		binary /= 10;
	}
	cout << "After Converting to Decimal" << decimal ;
}