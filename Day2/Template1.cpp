#include <iostream>
#include <string>

using namespace std;

template <typename T>
T max(T a, T b)
{
	return a > b ? a : b;
}

template <typename T1, typename T2>
auto add(T1&& a, T2 b) 
{
	return a + b;
}

void testFunc(int& value)
{
	cout << "Lvalue" << endl;
}

void testFunc(int&& value)
{
	cout << "Rvalue" << endl;
}


int main()
{
	int x = 10;
	testFunc(x);
	testFunc(10);
	cout << add(23, 3.45) << endl;
	/*
	cout << max(56, 34) << endl;
	cout << max(3.45, 3.41) << endl;
	cout << max("Anna"s, "Bob"s) << endl;
	int x = 10;
	const int y = x;
	cout << add(y, 3.45) << endl;
	*/
	return 0;
}