#include <iostream>
#include <vector>

using namespace std;

class Animal
{
public:
	Animal(string sound = "No sound given"): sound(sound){}
	virtual void say() = 0;
	//void say() { cout << endl; }
protected:
	string sound;
};

class Dog : public Animal
{
public:
	Dog():Animal("Bow Wow"){}
	void say()
	{
		cout << "The dog is saying " << sound << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(): Animal("Meew"){}
	void say()
	{
		cout << "The cat says " << sound << endl;
	}
};

void callSay(Animal* animal)
{
	animal->say();
}

int main()
{
	Dog d1;
	Dog d2;
	Dog d3;
	Cat c1;
	Cat c2;
	Cat c3;
	vector<Animal*> animals{ &d1, &c1 };
	for (Animal* animal : animals)
	{
		animal->say();
	}


	return 0;
}