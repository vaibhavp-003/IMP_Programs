#include <iostream>
using namespace std;

int reversearray(int *a, int l)
{
	for (int i = 0; i < l/2; i++)
	{
		int temp = a[i];
		a[i] = a[l-i-1];
		a[l-i-1] = temp;
	}
	return 1;
}

string reversestring(string str)
{
	int l = str.length();
	for (int i = 0; i < l/2; i++)
	{
		char temp = str[i];
		str[i] = str[l - i - 1];
		str[l - i - 1] = temp;
	}

	return str;
}

int main()
{
	int l, a[100];
	cout << "Enter the size of the array : ";
	cin >> l;
	cout << "Enter the numbers in the array : ";
	for (int i = 0; i < l; i++)
	{
		cin >> a[i];
	}

	reversearray(a, l);
	cout << "Reverse array : " << endl;;

	for (int i = 0; i < l; i++)
	{
		cout << a[i] << std::endl;
	}

	string str;
	cout << "Enter the string :";
	cin >> str;
	//reverse(str.begin(), str.end());
	//cout << str;

	cout << "Reverse string : ";
	cout << reversestring(str);

}