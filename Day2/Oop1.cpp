#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person();
	
	Person(string name, int age);
	
	Person(const Person& other);

	Person& operator =(const Person& other);

	string getName();
	
	void setName(string name);

	int getAge();

	void setAge(int age);

private:
	string name;
	int age;
};

Person::Person() : name(""), age(0) {}

Person::Person(string name, int age): name(name), age(age) {}

Person::Person(const Person& other): name(other.name), age(other.age){}

Person& Person::operator =(const Person& other)
{
	name = other.name;
	age = other.age;
	return *this;
}

string Person::getName()
{
	return name;
}

void Person::setName(string name)
{
	this->name = name;
}

int Person::getAge()
{
	return age;
}

void Person::setAge(int age)
{
	this->age = age;
}

int main()
{
	Person p1;
	Person p2("Anna", 32);
	Person p3("Bob", 43);
	Person p4;
	p4 = p3;
	p3.setName("Charlie");
	cout << "Hi " << p3.getName() << " you are " << p3.getAge() << " years old" << endl;
	cout << "Hi " << p4.getName() << " you are " << p4.getAge() << " years old" << endl;
	return 0;
}