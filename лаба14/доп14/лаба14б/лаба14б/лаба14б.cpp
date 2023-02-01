#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "Russian");
    const int n = 3;
    int B[n][n];  int i,k, j,a=0, m = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cout << "B[" << i << "],[" << j << "]=";
            cin >> B[i][j];
        }
    cout << "Исходный массив:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << B[i][j] << ' ';
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (B[i][j] == 0 && B[i][j+1] == 0 && B[i][j+2] == 0)
            {
                
                j = i;
                for (k = 0; k < n; k++)
                {
                    B[k][j] = B[k][j] / 2;
                }
                cout << "Номер cтроки со всеми нулевыми элементами " <<i<<endl;
            } 
            else
                a++;
        }
    }
   
    cout << "Итоговый мвссив:"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << B[i][j] << ' ';
        cout << endl;
    }
}