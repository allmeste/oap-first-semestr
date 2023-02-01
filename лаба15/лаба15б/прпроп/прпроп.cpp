#include <stdio.h>
#include <iostream>
#define N 100
int main()

{
    setlocale(LC_CTYPE, "Russian");
    const int n = 3;
    using namespace std;
    int a[n][n], i, j, k, m, d;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "B[" << i << "],[" << j << "]=";
            cin >> a[i][j];
        }
        cout << "Исходный матрица:\n";
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                cout << a[i][j] << ' ';
            cout << endl;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                d = a[i][0];
                cout << "Значение первого элемента найденной строки " << d << endl;
                for (i = 0; i < N; i++)
                {
                    for (j = 0; j < N; j++)
                    {
                        a[i][j] /= d;
                    }
                }
            }
        }
    }
    cout << "Перобразованная матрица \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            delete a[i];
            delete[] a;
        }
    }

    return 0;
}
