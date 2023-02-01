#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float c = 10.1, y, z;
	int i;
	for (i = 1; i <= 6; i++)
	{
		cout << "Введите у" << i << endl;
		cin >> y;
		if (y > c)
		{
			z = pow(sin(c), 2);
			cout << "Z=" << z << endl;
		}
		if (y <= c)
		{
			z = pow(cos(c), 2);
			cout << "Z=" << z << endl;
		}
		system("pause");
	}
}