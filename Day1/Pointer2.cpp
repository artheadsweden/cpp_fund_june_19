#include <iostream>

using namespace std;

int main()
{
	int* iPtr = new int(10);
	(*iPtr)++;
	cout << *iPtr << endl;
	delete iPtr;
	iPtr = nullptr;
	int x = 10;
	iPtr = &x;
	cout << *iPtr << endl;
	return 0;
}