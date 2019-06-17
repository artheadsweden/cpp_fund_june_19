#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int* b = &a;
	int** c = &b;
	int*** d = &c;
	(***d)++;
	int& e = a;
	cout << &a << endl;

	return 0;
}