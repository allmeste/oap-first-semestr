#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int j = 10.4e4;
	float  s = 5.20, x = 0, v = 0;

	for (int n = 0; n < 4; n++)
	{
		cout << "Введите x" << endl;
		cin >> x;

		if (2 * s > j * x);
		{
			v = pow(cos(j * x), 2);
			cout << "v=" << v << endl;
		}
		if (2 * s < j * x);
		cout << "v=" << v << endl;
		{
			v = 2 * tan(j * x);
			cout << "v=" << v << endl;
		}
		if (s = (j * x) / 2);
		{
			v = 5 - exp(x / 2);
			cout << "v=" << v << endl;
		}

	}
	system("pause");
}

