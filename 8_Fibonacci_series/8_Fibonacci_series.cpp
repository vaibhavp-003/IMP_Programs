#include <iostream>
using namespace std;

int fib_without_rec(int n)
{
	int t1, t2, t3;
	cout << "Without Recursion Fibonacci Series : ";
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			t1 = 0;
			cout << t1 << " ";
			continue;
		}

		if (i == 2)
		{
			t2 = 1;
			cout << t2 << " ";
			continue;
		}

		t3 = t1 + t2;
		cout << t3 << " ";

		t1 = t2;
		t2 = t3;
	}
	return 0;
}

int fib(int i)
{
	if (i <= 1)
	{
		return i;
	}
	return(fib(i - 1) + fib(i - 2));
}

int main()
{
	int n, i=0;
	cout << "Enter number of terms for Fibobacci Series : " << endl;
	cin >> n;
	fib_without_rec(n);
	cout << endl;
	cout << "With Recursion Fibonacci Series : ";
	while (i < n)
	{
		cout << fib(i) << " ";
		i++;
	}
}