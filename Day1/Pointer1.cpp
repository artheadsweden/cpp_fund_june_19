#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int* xPtr = &x;
	cout << *xPtr << endl;
	x++;
	cout << *xPtr << endl;
	(*xPtr)++;
	cout << x << endl;
	char str[] = "Hi there";
	cout << str << endl;
	char* charPtr = str;
	cout << *charPtr << endl;
	charPtr++;
	cout << *charPtr << endl;
	charPtr += 1;
	cout << *charPtr << endl;
	return 0;
}