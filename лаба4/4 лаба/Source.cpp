#include<iostream>
using namespace std;
void main() 
{
	setlocale(LC_ALL, "rus");
	int A, B, C, a, b, c;
	a = 50; b = 100; c = 200;
	cout << "������� A ���������� ������ ���������"<<endl;
	cin >> A;
	cout << "������� B ���������� ������ �����" << endl;
	cin >> B;
	cout << "������� C ���������� ������ ���������" << endl;
	cin >> C;
	cout << "����� ����� �����  �����: \n(A * a )+( B * b)+(C * c)="<<(A * a )+( B * b) +(C * c)<<endl;
	system("pause");
}