#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
    using namespace std;
    setlocale (LC_ALL, "rus");
    int  k, c, u = 1, i, j = 0, n = 0, max, num, size;
    srand(time(0));
     float *pA;
    cout << "Введите размерность " << endl;
    cin >> size;
  
    for (i = 0; i < size; i++)
    {
       float *pA = (float*)malloc(size * sizeof(float));
    }
    /*srand(time(0));*/
    for (k = 0; k < size; k++)
    {
        cin >> pA[k]; /*= rand() % 100 +1*/; // заполне-ние массива случ. числами       
    }
    cout << "Данный массив ";
    for (k = 0; k < 10; k++)
        cout << setprecision(2) << pA[k] << "   ";

    cout << "Введите чисо С " << endl;
    cin >> c;
    for (i = 0; i < size; i++)
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
        for (j = 0; j < size - i; j++)
        {
            u = u * max;
        }
    }


  cout << "Количество элементов,больших числа С: " << n << endl;
  cout << "Максимальный элемент массива: " << max << endl;
  cout << "произведение элементов массива, расположенных после максимального по модулю элемента.: " << u << endl;

  free( pA); 
  return 0;// освобождение памяти
}



