#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float y = 0, t = 0, a = 1.5e8, i = 0;
	int  b = 2, j = 6;
	for (int n = 0; n < 4; n++);
	{
		cout << "Введите i" << endl;
		cin >> i;
		y = a / (double)b + exp(b) * (1 + (double)j * i);
		t = cos(y + 1) / (sqrt(abs(-2 * (double)j)));
		cout << " y = a / (b + exp(b) / (1 + j * i)=" << y << endl;
		cout << "t = cos(y + 1) / (sqrt(abs(-2 * j))= " << t << endl;
	}
	system("pause");
}
