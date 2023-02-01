//#include <stdio.h>
//#include <iostream>
//using namespace std;
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	int k, dl, h, i, n, j, l, tmx = 0, imx = 0;
//	char s[100];
//	cout << "введите слова: ";
//	cin.getline(s, 100);
//	for (j = 0; s[j] != 0; j++)
//	{
//		cout << s[j];
//	}
//	for (i = 0, n = 0; s[i] != 0; i++)
//	{
//		if (s[i] == ' ')
//		{
//			if (n > tmx)
//			{
//
//				imx = i - n;
//			}
//		}
//		else n++;  //увеличить счетчик символов в слове
//	}
//
//
//	cout << endl << "Индекс самого длинного слова " << imx << endl;
//}
//
//
#include <windows.h>
#include <stdio.h>
#include<iostream>
void main()
{
	SetConsoleCP (1251);
	SetConsoleOutputCP (1251);
	setlocale(LC_ALL, "rus");
    using namespace std;
	char s[256];
	int count ,imx,tmx=0,n,i,j;
	puts(" Введите предложение  ");
	gets_s(s);
	for (j = 0; s[j] != 0; j++)
	{
		cout << s[j];
	}
	for (i = 0, n = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ')
		{
           imx = i - n;
			
		}
		else n++;  //увеличить счетчик символов в слове
	}
         cout << endl << "Индекс самого длинного слова " << imx << endl;
		 cout << endl << "Индекс самого длинного слова " << tmx << endl;
}
		
			
		


