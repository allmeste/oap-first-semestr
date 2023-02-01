#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int y, i;
    float c = 10.1, z, sum = 0.0;

    for (i = 1; i < 6; i++)
    {
        cout << "Ввдите y" << i << endl;
        cin >> y;
        sum = sum + y;
    }
    if (sum > c)
    {
        z = pow(sin(c), 2);
        cout << "Z=" << z << endl;
    }
    if (sum <= c)
    {
        z = pow(cos(c), 2);
        cout << "Z=" << z << endl;
    }
    return 0;
}
