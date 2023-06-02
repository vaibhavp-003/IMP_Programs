#include <iostream>
using namespace std;

namespace first_space
{
	void fun()
	{
		std::cout << "First_space !";
	}
}

namespace second_space
{
	void fun()
	{
		cout << "Second space !";
	}
}

using namespace second_space;
int main()
{
	fun();
}
