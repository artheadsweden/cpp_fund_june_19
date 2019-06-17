#include <iostream>

using namespace std;

int main()
{
	cout << "Size of int " << sizeof(int) << " bytes" << endl;
	cout << "Size of long long " << sizeof(long long) << " bytes" << endl;
	cout << "Size of char " << sizeof(char) << " bytes" << endl;
	unsigned char c = 255;
	cout << (int)c << endl;
	c++;
	cout << (int)c << endl;
	return 0;
}