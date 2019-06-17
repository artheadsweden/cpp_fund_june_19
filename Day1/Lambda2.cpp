#include <iostream>
#include <functional>
using namespace std;

function<double(int)> funcfact(int e)
{
	return [e](int val)
	{
		return pow(val, e);
	};
}

int main()
{
	auto f = [](int e)
	{
		return [e](int val)
		{
			return pow(val, e);
		};
	};

	auto square = funcfact(2);
	auto cube = funcfact(3);

	cout << square(2) << endl;
	cout << square(3) << endl;
	cout << cube(2) << endl;
	cout << cube(3) << endl;
	return 0;
}