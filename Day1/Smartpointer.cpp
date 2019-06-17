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
	{
		auto uPtr = make_unique<MyClass>();
		unique_ptr<MyClass> uPtr2 = move(uPtr);
	}
	cout << "After scope" << endl;
	MyClass* iPtr = new MyClass();
	delete iPtr;
	cout << "About to end" << endl;
	return 0;
}