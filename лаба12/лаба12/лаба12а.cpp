#include <iostream>
#include <time.h>
using namespace std; 
#define  MaxN  100
int main()
{
    setlocale (LC_CTYPE, "Russian");
    int x[MaxN], y[MaxN];
    int n, k, sum = 0, j;
    cout << "Введите размерность первого массива ";
    cin >> n;

    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++)
    {
        *(x + i) = rand() % 50;
        cout << ' ' << *(x + i);
    }
    cout << endl;
    cout << "Введите размерность второго массива ";
    cin >> k;
    srand((unsigned)time(NULL));
    for (int j = 0; j < k; j++)
    {
        *(y + j) = rand() % 50;
        cout << ' ' << *(y + j);
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i] == y[j])
            {
                sum = sum + 1;
            }
        }
    }
    cout << "Количество одинаковых элементов в этих массивах, т. е. количество пар " << sum << endl;
}