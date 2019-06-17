#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	auto f = [&x, y](int a)
	{ 
		return a + x + y; 
	};
	x = 30;
	cout << f(10) << endl;
	return 0;
}