#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int left;
	int right;
	cout << "¬ведите на сколько сдвигаем вправо? ";  cin >> left;
	cout << endl;
	for (int i = left; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int j = 0;  j <left; j++)
	{
		cout << arr[j] << "\t";
	}

	cout << "\n¬ведите на сколько сдвигаем влево ? "; cin >> right;
	cout << endl;
	for (int i =n- right; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int j = 0; j < n-right; j++)
	{
		cout << arr[j] << "\t";
	}
	cout << endl;
}