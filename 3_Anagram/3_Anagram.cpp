#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void is_anagram(string str1, string str2)
{
	int l1, l2;
	l1 = str1.length();
	l2 = str2.length();

	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	if (str1 == str2)
	{
		cout << "Strings are anagram";
	}
	else
	{
		cout << "Strings are not anagram";
	}
}

bool is_anagram2(string str1, string str2)
{
	int a[256] = { 0 }, b[256] = {0};
	if (str1.length() == str2.length())
	{
		for (int i = 0; i < str1.length(); i++)
		{
			a[str1[i]]++;
			b[str2[i]]++;
		}

		for (int i = 0; i < 256; i++)
		{
			if (a[i] != b[i])
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else
	{
		return false;
	}
}

int main()
{
	// A-Z = 65-90
	// a-z = 97-122
	//char a = 'z';
	//cout << int(a);

	string str1, str2;
	cout << "Enter string 1 : ";
	cin >> str1;
	cout << "Enter string 2 : ";
	cin >> str2;

	if (is_anagram2(str1, str2))
	{
		cout << "Strings are anagram";
	}
	else
	{
		cout << "Strings are not anagram";
	}
}

