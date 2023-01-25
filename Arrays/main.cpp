#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 5;
	double sum = 0;// переменная для суммирования 
	int arr[n] ;
	for (int i = 0; i < n; i++)
	{
		cout << "Ввидите значение массива : ";
		cin >> arr[i];
	}
	//Вывод массива на экран в прямом прорядке :
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
		sum += arr[i];
	}
	cout << "\n\n Сумма = " << sum;
	cout << endl;
	cout << "\n Среднее значение массива = " << sum / n << endl;


	//Вывод массива на экран в обратном порядке: 

	//for (int j = n-1; j >= 0; j--)
	//{
	//	cout << arr[j] << "\t";
	//}
	//cout << endl;

}
