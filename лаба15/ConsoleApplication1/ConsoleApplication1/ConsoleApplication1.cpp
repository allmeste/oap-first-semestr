#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void main()
{
    setlocale(LC_ALL,"rus");
    int k, c, u = 1, i, j = 0, n = 0, max;
    srand(time(0));
    int* pA = new int[10];    //созд. динам. массива веществ. чисел из 10 элементов
    for (k = 0; k < 10; k++)
        pA[k] = rand() % 100;   // заполне-ние массива случ. числами 
    cout << "Данный массив " << endl;
    for (k = 0; k < 10; k++)
        cout << setprecision(2) << pA[k] << "   ";

    cout << "Введите чисо С " << endl;
    cin >> c;
    for (i = 0; i < 10; i++)
    {
        max = pA[1];
        if (pA[i] > c)
        {
            n++;
        }
        if (pA[i] > max)

        {
            pA[i] = max;

        }
       
    }
}

cout << "Количество элементов,больших числа С: " << n << endl;
cout << "Максимальный элемент массива: " << max << endl;
cout << "произведение элементов массива, расположенных после максимального по модулю элемента.: " << u << endl;

delete[] pA;  // освобождение памяти
}
