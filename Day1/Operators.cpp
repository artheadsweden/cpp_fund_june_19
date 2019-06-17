#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	a = b = c = d = e = 0;

	a++;
	cout << a << endl;
	cout << a++ << endl;
	cout << ++a << endl;

	a += 3;

	return 0;
}