#include <iostream>

using namespace std;

int* sortAsc(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (*(p + j) < *(p + i))
			{
				swap(*(p + j), *(p + i));
				/*
				int temp = *(p + j);
				*(p + j) = *(p + i);
				*(p + i) = temp;
				*/
			}
		}
	}
	return p;
}

int main()
{
	int myarr[] = { 23, 34, 2, 3, 5, 12, 42, 56, 89, 8 }; 

	int* p = sortAsc(myarr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << *(p + i) << endl;
	}

	cout << "==============" << endl;

	for (auto val : myarr)
	{
		cout << val << endl;
	}
	return 0;
}