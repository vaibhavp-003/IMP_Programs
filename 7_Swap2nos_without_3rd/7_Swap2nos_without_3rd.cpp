#include <iostream>
using namespace std;

int swapnos(int &a, int &b) 
{
	a = a + b;	// 3 = 1 + 2
	b = a - b;	// 1 = 3 - 2
	a = a - b;	// 2 = 3 - 1

	cout << "After Swappnig : " << a << " " << b << endl;

	return 0;
}

int main()
{
	int a, b;

	cout << "Enter two nos : " << endl;
	cin >> a >> b;
	cout << "Before Swapping : " << a << " " << b << endl;
	swapnos(a, b);
}