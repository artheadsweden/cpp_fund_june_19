#include <iostream>
#include <memory>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "Constructor" << endl;
	}

	~MyClass()
	{
		cout << "Destructor" << endl;
	}
};

int main()
{
	shared_ptr<MyClass> sPtr2;
	{
		auto sPtr1 = make_shared<MyClass>();
		sPtr2 = sPtr1;
		MyClass a;
	}
	cout << "After scope" << endl;
	
	return 0;
}