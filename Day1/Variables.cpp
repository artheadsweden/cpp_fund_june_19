#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	float y = 3.4;
	auto b = (unsigned int)y;
	auto a = 10;
	auto c = y + a;
	decltype(y + a) d = y + a;

	cout << a << endl;

	return 0;
}