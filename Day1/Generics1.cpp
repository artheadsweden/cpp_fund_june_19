#include <iostream>
#include <string>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

double max(double a, double b)
{
	return a > b ? a : b;
}

string max(string a, string b)
{
	return a > b ? a : b;
}

int main()
{
	cout << max(13, 4) << endl;
	cout << max(5.6, 5.75) << endl;
	cout << max("Bob", "Anna") << endl;
	return 0;
}