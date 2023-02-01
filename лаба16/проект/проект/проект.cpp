//#include <iostream>
//#include <string>
//#include <windows.h>
//#include <algorithm>
//using namespace std;
//
//int fmin(int* a, int n)
//{
//	int* p = &n;
//	int min = p[0], nom;
//	for (int i = 0; i <= 5; i++)
//		if (p[i] < min)
//		{
//			min = p[i];
//			nom = i;
//		}
//
//	return (nom);
//}
//int fsum(int* a, int n)
//{
//	int* p = &n;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		if (p[i] < 0)
//			for (int j = i; j < (n + 1) - i; j++)
//			{
//				sum = sum + p[j + 1];
//			}
//
//	return (sum);
//}
//int& fun(char tmp[], const int MaxSize)
//{
//	int flag;
//	for (int i = 0; i < MaxSize; i++)
//	{
//		if (tmp[i] == 'Б')
//		{
//			if (tmp[i + 1] == 'Г')
		/*		if (tmp[i + 2] == 'Т')
					if (tmp[i + 3] == 'У')
					{
						flag = 1;
						break;
					}
		}
		else
			flag = 0;
	}
	return flag;
}
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);;
	const int MaxSize = 256;
	char tmp[MaxSize];
	cout << "Ведите текст " << endl;
	cin.getline(tmp, MaxSize);
	int k, c = 1;
	int* a;
	int  i, n;
	char str[50];
	cout << "Введите размер массива" << endl;
	cin >> n;
	cout << "Введите массив: ";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	while (c != 0)
	{
		cout << "Что желаете сделать?" << endl
			<< "1-получить номер минимального элемента для массива " << endl
			<< "2-получить сумма модулей после отрицательного элемента  для массива" << endl
			<< "3-Проверить,есть ли в ведённом тексте слово 'БГТУ'" << endl
			<< "4 - выход" << endl;
		cin >> k;
		switch (k) {
		case 1:cout << "Номер минимального элемента " << fmin(*a, n) << endl; break;
		case 2: cout << endl << "Сумма модулей после отрицательного элемента " << fsum(a, n) << endl; break;
		case 3:if (fun(tmp, MaxSize) == 1)
			cout << "В тескте есть слово 'БГТУ' " << endl;
			  else
			cout << " В тескте нет слова 'БГТУ' " << endl;
		case 4:	 c = 0;
			break;
		default:
			cout << " Нет такой опции, выберите снова" << endl;
			cout << endl;
			break;
		}
	}
}*/


#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>
#include <iomanip>
using namespace std;

void main()
{
	char s[25], k[25];
	int i, j;
	cin >> s;
	for (i = 0; i < 25;i++)

	{
		if (s[i] = 0x20 || s[i] = ".")
			s[i] = k[i];
		else
			s[i + 1] = s[i] + 0x20;


	}
}