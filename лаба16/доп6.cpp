#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int fmin(int n, ...) {
	//2. Написать функцию fmin с переменным числом параметров, которая находит минимальное из чисел типа int.
	int* p = &n;
	int min = p[0],nom;
	for (int i = 2; i <= n; i++)
		if (p[i] < min)
		{
			min = p[i];
	        nom = i;
		}

	return (nom);
}
int fsum(int n, ...) {
	int* p = &n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	if (p[i] < 0)
		for (int j = i; j <( n+1)-i; j++)
		{
			sum = sum + p[j+1 ];
		}
	
	return (sum);
}
int main()
{
	setlocale(LC_ALL, "rus");
	int k,c=0;

	cout << "Введите размер массива" << endl;
	cin >> n;
	if (n < 0)
	{
		cout << "Размер массива не может быть отрицательным!" << endl;
		exit(0);
	}
	
	/*cout << "Что желаете получить?" << endl << "1-номер минимального элемента для массива (12, 3, -40, 54, 1)" <<endl
		<< "2-сумма модулей после отрицательного элемента  для массива(4, -10, 40, 20, 12)" << endl;
	do
	{ 
		cin >> k;
		switch (k) {
		case 1:cout << "Номер минимального элемента " << fmin(12, 3, -40, 54, 1) << endl; break;
		case 2: cout << endl << "Сумма модулей после отрицательного элемента " << fsum(4, -10, 40, 20, 12) << endl; break;
		case 3: cout << "Нет такой опции" << endl; break;
		}
	}*/

}
