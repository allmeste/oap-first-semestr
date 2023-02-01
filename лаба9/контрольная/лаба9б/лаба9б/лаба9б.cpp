#include<iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "rus");
    float a, b, n, h, s1=0,s2=0, x, y, z,i;
    cout << "Введите границу отрезка а " << endl;
    cin >> a;
    cout << "Введите границу отрезка b " << endl;
    cin >> b;
    cout << "Введите число равных частей n  " << endl;
    cin >> n;

    h = (b - a) / (2*n);
    x = a +2* h;
    i = 1;

    while (i < n - h)
    {
        y = (pow(x, 4) + 4);
        s2 = s2 + y;
        x = x + h;
        s1 = s1 + y;
        x = x + h;      i = i + 1;
    }

    z = h / 3 * ((pow(a, 4) + 4)+4*(pow(a+h, 4) +4)+4*s1+ 2 * s2 + (pow(b, 4)+4));
    cout << "Площадь криволинейной трапеции равна  " << z << endl;
}