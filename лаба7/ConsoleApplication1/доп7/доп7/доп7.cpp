#include<iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "rus");
    float c, d, i,sum;
    cout << "Введите сколько литров воды в первом ведре" << endl;
    cin >> c;
    cout << "Введите сколько литров воды во втором ведре" << endl;
    cin >> d;
    for (i = 1; i <= 12; i++)
    {
        d = d + c / 2;
        c = c-c/2 + d / 2;
        d = d - d / 2;
     
    }
    cout << "Количество воды в первом ведре после 12 переливаний " << c << endl;
    cout << "Количество воды во втором ведре после 12 переливаний  " << d << endl;
}

