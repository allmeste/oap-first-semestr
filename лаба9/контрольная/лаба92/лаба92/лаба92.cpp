
#include <windows.h>
#include <stdio.h>
#include<iostream>
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	using namespace std;
	char s[256];
	int count, imx = 0, tmx = 0, n, i, j, k;
	puts(" Введите предложение  ");
	gets_s(s);

	for (i = 0, n = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ')

		{
			if (n > tmx)
			{
				tmx = n;
				imx = i - n;
			}


		}
		else n++;  //увеличить счетчик символов в слове
		for (i = 0, n = 0; s[i] != 0; i++)
		{
			tmx = i;

			if (s[i] == ' ')

			{
				if (n < tmx)
				{
					tmx = n;
					count = i - n;
				}
			}
			else n++;
		}

		cout << endl << "Индекс самого длинного слова " << count << endl;
		cout << endl << "Индекс самого короткого слова " << imx;
	}
}
