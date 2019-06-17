#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "Alice Smith";
	string other = move(name);
	cout << "Your name is " << name << "!" << endl;
	cout << "Your name is " << other << "!" << endl;
	return 0;
}