#include <iostream>
#include <ctime>
#include <iomanip>
#define N 100
void main()

{
    setlocale(LC_CTYPE, "Russian");
    const int n = 3;
    using namespace std;
    int** a;
    int i, j, k, m,d;
    a = new int* [n];
    for (i = 0; i < n; i++)
        a[i] = new int[N];
    cout << " Введите элементы матрицы " << endl;
    for (i = 0; i < n; i++) // ввод 
        for (j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]  ";
            cin >> a[i][j];
        }
        
        cout << "Исходный матрица:\n";
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                cout << a[i][j] << ' ';
            cout << endl;
        }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
               d = a[i][0];
                cout << "Значение первого элемента найденной строки " << d << endl;

                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
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
    delete[] a;
}
