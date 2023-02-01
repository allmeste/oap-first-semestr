#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Ведите число а" << endl;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "Число а является четным" << endl;
	}
	else
	{
		cout << "Число а является нечетным" << endl;
	}
	system("pause");
}