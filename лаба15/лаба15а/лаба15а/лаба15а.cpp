#include <iostream>
#include <ctime>
#include <iomanip>

void main()
{   using namespace std;
    setlocale (LC_ALL, "rus");
    int *pA, k, c,u=1, i, j=0,n = 0,max;
    srand(time(0));
    cin >> n;
    pA = new int* [n];
    for (i = 0; i < 10; i++)
        pA[i] = new int[n];
   //созд. динам. массива веществ. чисел из 10 элементов
    srand(time(0));
    for (k = 0; k < 10; k++)
    {
        cout << " pA[k]";
        cin >> pA[k];
    }                   // заполне-ние массива случ. числами 
    cout << "Данный массив ";
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
        if(pA[i]>max)
            
        {
            pA[i] = max;
            
        }
        for(j=0;j<10-i;j++)
        { 
           u =  u * max;
        }
    }
 

    cout << "Количество элементов,больших числа С: " << n << endl;
    cout << "Максимальный элемент массива: " << max << endl;
    cout << "произведение элементов массива, расположенных после максимального по модулю элемента.: " << u << endl;

 
    delete[] pA;  // освобождение памяти
}


