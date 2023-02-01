#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, i;
	cout << "Введите ширину прямоугольника" << endl;
	cin >> a;
	cout << "Введите длину прямоугольника" << endl;
	cin >> b;
	for (i = 1; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "*";
		}
				cout << endl;
	}

			cout << endl;
}




