#include <iostream>

using namespace std;

int add(int&& a, int&& b)
{
	cout << "int add(const int&& a, const int&& b)" << endl;
	return a + b;
}


int add(const int& a, const int& b)
{
	cout << "int add(const int& a, const int& b)" << endl;
	return a + b;
}

int add(int* a, int* b)
{
	cout << "int add(int* a, int* b)" << endl;
	return *a + *b;
}


int main()
{
	int x = 10;
	int y = 3;

	auto result = add(move(x), move(y));
	cout << result << endl;
	auto result2 = add(23, 5);
	cout << result2 << endl;
	return 0;
}