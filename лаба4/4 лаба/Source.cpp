#include<iostream>
using namespace std;
void main() 
{
	setlocale(LC_ALL, "rus");
	int A, B, C, a, b, c;
	a = 50; b = 100; c = 200;
	cout << "¬ведите A количество сбитых самолетов"<<endl;
	cin >> A;
	cout << "¬ведите B количество сбитых ракет" << endl;
	cin >> B;
	cout << "¬ведите C количество сбитых спутников" << endl;
	cin >> C;
	cout << "ќбща€ сумма очков  равна: \n(A * a )+( B * b)+(C * c)="<<(A * a )+( B * b) +(C * c)<<endl;
	system("pause");
}