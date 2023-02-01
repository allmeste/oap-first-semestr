#include<iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "rus");
    float a, b, n, h, s = 0, x,y, z;
    cout << "Введите границу отрезка а " << endl;
    cin >> a;
    cout << "Введите границу отрезка b " << endl;
    cin >> b;
    cout << "Введите число равных частей n  " << endl;
    cin >> n;
    
    h = (b - a) / n;
    x = a + h;
   
    while (x < b - h)
    {
        y = (pow(x, 4) + 4);
        s = s + y;
        x = x + h;
    }

    z = h / 2 * ((pow(a, 4) + 4) + 2 * s + (pow(b, 4)));
    cout << "Площадь криволинейной трапеции равна  " << z << endl;
}