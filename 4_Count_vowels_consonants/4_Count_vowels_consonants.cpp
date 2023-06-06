#include <iostream>
using namespace std;

int main()
{
	string str;
	int vowels = 0;
	int consonents = 0;
	cout << "Enter the string : ";
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
			str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			vowels++;
		}
		else
		{
			consonents++;
		}
	}
	cout << "Vowels = " << vowels << " Consonents = " << consonents;
}