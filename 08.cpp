#include <iostream>
using namespace std;

int main()
{
	int x = 12721;
	int oddsum = 0 , evensum=0 ;

	while (x)
	{
		int d = x % 10;
		if (d%2==0)
		{
			evensum +=d;
		}
		else {
			oddsum += d;
		}

		x /= 10;
	}

	cout << "The difference between the sum of even digits and the sum of odd digits = " << abs(evensum-oddsum) ;

}