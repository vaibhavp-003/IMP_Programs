#include <iostream>
using namespace std;

int isprime(int n)
{
	int flag = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			flag++;
		}
	}

	if (flag == 0)
	{
		cout << "Number is Prime !" << endl;
	}
	else
	{
		cout << "Number is Not Prime !" << endl;
	}
	return 0;
}

int isperfect(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}

	if (sum == n)
	{
		cout << "Number is a Perfect Number !" << endl;
	}
	else
	{
		cout << "Number is not a Perfect Number !" << endl;
	}
	return 0;
}

int main()
{
	int n;
	cout << "Enter the number : " << endl;
	cin >> n;
	isprime(n);
	isperfect(n);
}