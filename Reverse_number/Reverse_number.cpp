#include <iostream>
using namespace std;

int main()
{
	int n = 123;
	int rev = 0;
	int reminder = 0;
	while (n > 0)
	{
		reminder = n % 10;
		n = n/10;
		rev = rev * 10 + reminder;
	}
	cout << rev;
}