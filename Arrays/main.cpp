#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 5;
	double sum = 0;// переменная для суммирования 
	int arr[n] ;
	int max = arr[0];//переменнаяя для максимального значения
	unsigned int min = arr[0];//переменаня для минимального значения, положтельное значение 
	for (int i = 0; i < n; i++)
	{
		cout << "Ввидите значение массива : ";
		cin >> arr[i];
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << "\n\nСумма = " << sum << endl;
	cout << "\nСреднее значение массива = " << sum / n << endl;
	cout << "\nМаксимальное значение массива = " << max << endl;
	cout << "\nМинимальное значение массива = " << min << endl;

	//Вывод массива на экран в обратном порядке: 

	//for (int j = n-1; j >= 0; j--)
	//{
	//	cout << arr[j] << "\t";
	//}
	//cout << endl;

}
