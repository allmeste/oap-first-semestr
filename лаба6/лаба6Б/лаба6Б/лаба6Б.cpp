 #include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	float y = 0, t = 0, a = 1.5e8, i = 3;
	int  b = 2, j = 6;
	while(i>2.1)
	{
		
		y = a / (double)b + exp(b) * (1 + (double)j * i);
		t = cos(y + 1) / (sqrt(abs(-2 * (double)j)));
		cout << " y = a / (b + exp(b) / (1 + j * i)=" << y << endl;
		cout << "t = cos(y + 1) / (sqrt(abs(-2 * j))= " << t << endl;
		i = i - 0.1;
	}
	system("pause");
}
