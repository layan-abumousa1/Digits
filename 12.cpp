#include <iostream>
using namespace std;

int get(int x, int i) {
	return (x / (int)pow(10, i) )% 10;
}
int main()
{
	int x = 123412;
	int length = log10(x)+1;
	if (get(x,0)>get(x,1))
	{
		cout << get(x, 0) << " ";
	}
	for (int i = 1; i < length; i++)
	{
		if (get(x,i)>get(x,i-1) && get(x, i) > get(x, i + 1))
		{
			cout << get(x, i) << " " ;
		}
	}
}

