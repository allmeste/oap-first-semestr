#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a  ,i,j,k=0;

	char tmp[33];
	cout << "Введите число а " << endl;
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << tmp << endl;
	for (j = 5; j <= 10; ++j)
	{
		if (1 == 1 & (a >> j));
		{
			++k;
		}
	}
	cout << "Количество единиц с 5 по 10 бит в числе а  " <<k<< endl;

}
