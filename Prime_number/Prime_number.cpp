#include <iostream>
using namespace std;

int main()
{

	for (int i = 50; i <= 100; i++)
	{
		int c = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				c = c++;
			}
		}

		if (c == 0)
		{
			cout << i << " is a Prime number" << endl;
		}
	}
}