#include <iostream>

using namespace std;

class Value
{
public:
	explicit Value(int value): value(value){}
	int getValue()
	{
		return value;
	}
private:
	int value;
};

int main()
{
	Value v1(35);
	cout << v1.getValue() << endl;

	return 0;
}