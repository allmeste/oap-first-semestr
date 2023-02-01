//1.	В заданной последовательности слов найти все слова, имеющие заданное окончание
#include <windows.h>
#include <stdio.h>
#include<iostream>
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	using namespace std;
	char s [100] = "За окном морозно и солнечно ", okonchanie='о';
	int chislo, n=0, i = 0, j = 0;
	cout <<endl<< "Заданная строка: ";
	for (j = 0; s[j] != 0; j++)
	{
		cout << s[j] ;
	} 
	cout<<endl << "Заданное окончание: " << okonchanie << endl;
	for (i = 0, n = 0; s[i] != 0; j = 0, i++)
	{
		if (s[i] == ' ')
		{
			if (s[i - 1] == okonchanie)
			{
				chislo = i - n;

				cout << endl << "Индекс слова с заданным окончанием   " << chislo << endl;
			}
		}
		else {
			n++;
		       }
	}
}