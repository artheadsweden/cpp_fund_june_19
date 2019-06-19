#include <iostream>

using namespace std;

template <typename T>
class Calc
{
public:
	Calc(T value);
	Calc<T> operator +(const Calc<T>& other);
	Calc<T> operator -(const Calc<T>& other);
	Calc<T> operator *(const Calc<T>& other);
	Calc<T> operator /(const Calc<T>& other);
	//friend ostream& operator <<(ostream& os, const Calc<T>& other);
	T getValue();
private:
	T value;
};

template<typename T>
Calc<T>::Calc(T value): value(value){}

template<typename T>
Calc<T> Calc<T>::operator +(const Calc<T>& other)
{
	return Calc<T>(value + other.value);
}

template<typename T>
Calc<T> Calc<T>::operator -(const Calc<T>& other)
{
	return Calc<T>(value - other.value);
}

template<typename T>
Calc<T> Calc<T>::operator *(const Calc<T>& other)
{
	return Calc<T>(value * other.value);
}

template<typename T>
Calc<T> Calc<T>::operator /(const Calc<T>& other)
{
	return Calc<T>(value / other.value);
}


template<typename T>
T Calc<T>::getValue()
{
	return value;
}

/*template <typename T>
ostream& operator <<(ostream& os, const Calc<T>& other)
{
	os << other.value;
	return os;
}*/

int main()
{
	Calc<int> c1(10);
	Calc<int> c2(20);
	Calc<int> c3 = c1 + c2;
	cout << c3 << endl;
	return 0;
}


