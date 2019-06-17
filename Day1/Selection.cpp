#include <iostream>

using namespace std;

int main()
{
	int a = 3;
	int b = 4;
	int c = 5;

	if (a == 3)
	{
		cout << "a is 3" << endl;
	}
	else
	{
		cout << "a is not 3" << endl;
	}

	if ((a == 3 && b < 2) || c > 1)
	{
		cout << "Something" << endl;
	}

	int x = 10;

	switch (x)
	{
	case 10:
		cout << "x is 10" << endl;
		break;
	case 20:
		cout << "x is 20" << endl;
		break;
	default:
		cout << "x is not 10 or 20" << endl;
		break;
	}

	int max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	cout << max << endl;

	max = a > b ? a : b;

	return 0;
}