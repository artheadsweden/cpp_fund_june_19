#include <iostream>

using namespace std;

int main()
{
	// [][][][][]
	int arr[5];
	int* ptr = arr;
	cout << "Enter five numbers separated by space: ";
	
	cin >> *ptr >> *(ptr+1) >> *(ptr+2) >> *(ptr+3) >> *(ptr+4);
	cout << "Your numbers are:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}