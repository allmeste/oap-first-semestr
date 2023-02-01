#include <iostream>
using namespace std;
 int main()
{
	setlocale(LC_ALL, "rus");
    float j = 10.4e4, s = 5.2, v=0,x=0;

	for (int n = 0; n < 4; n++)
	{
		cout << "Введите x" << endl;
		cin >> x;
		if (2*s > j * x);
		{
			v = pow(cos(j * x), 2);
			cout << "v=" <<v<< endl;
		}
			if (2 * s < j * x);
			{
				v = 2 * tan(j * x);
				cout << "v=" << v << endl;
			}
				if ( s = (j * x)/2);
				{
					v = 5 - exp(x / 2);
					cout << "v=" << v << endl;
				}
	}
	system("pause");
	return 0;	
}