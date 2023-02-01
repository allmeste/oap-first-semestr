#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "rus");
	int A, B, p, n;
	char tmp[33];
	cout << "Введите число А :" << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число А в двоичной системе:" << tmp << endl;
	cout << "Введите позицию p" << endl;
	cin >> p;
	cout << "Введите количество битов n, которые " << endl;
	cin >> n;
	int temp = 1;
	temp = temp << p - 1;
	_itoa_s(temp, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	int mask;
	for (int i = 1; i <= n; i++)
	{
		mask |= temp;
		temp <<= 1;
	}
	mask = ~mask;
	A &= mask;
	_itoa_s(A, tmp, 2);
	cout << " Результат:  " << tmp << endl << endl;
}