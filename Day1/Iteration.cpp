#include <iostream>
#include <vector>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	int x = 1;

	while (x < 10)
	{
		cout << x << endl;
		x++;
	}

	x = 10;

	do
	{
		cout << x << endl;
		x++;
	} while (x < 10);

	int intArr[] = { 1,2,3,4 };
	
	for (auto n : intArr)
	{
		cout << n << endl;
	}

	vector<int> intVec = { 1,2,3,4,5 };
	for (auto i = intVec.begin(); i < intVec.end(); i++)
	{
		cout << *i << endl;
	}

	return 0;
}