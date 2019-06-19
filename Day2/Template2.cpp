#include <iostream>

using namespace std;

void process(int& value)
{
	cout << "Lvalue process of value " << value << endl;
}

void process(int&& value)
{
	cout << "Rvalue process of value " << value << endl;
}

template <typename T>
void callProcess(T&& value)
{
	process(forward<T>(value));
}

int main()
{
	int x = 10;
	callProcess(x);
	callProcess(10);
	return 0;
}