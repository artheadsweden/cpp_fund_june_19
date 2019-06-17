#include <iostream>

/*
This is a multiline comment
It can run over several lines
*/


// This is a line comment

using namespace std; // Using the std namespace as default

namespace mine
{
	int abs(int x)
	{
		return x + 1;
	}
}

int main()
{
	cout << abs(-5) << endl << mine::abs(10) << endl;
	return 0;
}