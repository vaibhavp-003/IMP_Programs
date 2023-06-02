#include <iostream>
using namespace std;

int main()
{
	string str;
	char ch;
	int count = 0;
	cout << "Enter the string : ";
	cin >> str;
	cout << "Enter the character to search : ";
	cin >> ch;

	for (int i = 0; i < str.length(); i++)
	{
		if (ch == str[i])
		{
			count++;
		}
	}
	cout << "Occurence of : " << ch << " = " << count;
}