#include <iostream>
#include <string>
using namespace std;

void s_palindrome(string str)
{
	string s_original = str;
	reverse(str.begin(), str.end());
	
	if (s_original == str)
	{
		cout << s_original << " is a Palindrome string\n";
	}
	else
	{
		cout << s_original << " is not a Palindrome string\n";
	}
}

void n_palindrome(int no)
{
	int n_original = no;
	string num = to_string(no);
	reverse(num.begin(), num.end());

	if (num == to_string(n_original))
	{
		cout << n_original << " is a Palindrome number\n";
	}
	else
	{
		cout << n_original << " is not a Palindrome number\n";
	}
}

int reversenum(int no)
{
	int rev = 0;
	int reminder = 0;

	while (no > 0)
	{
		reminder = no % 10;
		no = no / 10;
		rev = rev * 10 + reminder;
	}
	return rev;
}

void n_palindrome2(int n)
{
	if (n == reversenum(n))
	{
		cout << n << " is a Palindrome number\n";
	}
	else
	{
		cout << n << " is not a Palindrome number\n";
	}
}

int main()
{
	string str;
	cout << "Enter the string : ";
	cin >> str;
	s_palindrome(str);

	int no;
	cout << "Enter the number : ";
	cin >> no;
	n_palindrome(no);
	n_palindrome2(no);
}