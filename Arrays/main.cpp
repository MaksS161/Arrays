#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 5;
	double sum = 0;// ���������� ��� ������������ 
	int arr[n] ;
	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� ������� : ";
		cin >> arr[i];
	}
	//����� ������� �� ����� � ������ �������� :
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
		sum += arr[i];
	}
	cout << "\n\n ����� = " << sum;
	cout << endl;
	cout << "\n ������� �������� ������� = " << sum / n << endl;


	//����� ������� �� ����� � �������� �������: 

	//for (int j = n-1; j >= 0; j--)
	//{
	//	cout << arr[j] << "\t";
	//}
	//cout << endl;

}
