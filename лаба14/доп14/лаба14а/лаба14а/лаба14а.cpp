#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "Russian");
    const int n = 3;
    int B[n][n], a[n][n];  int i, j, m;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cout << "B[" << i << "],[" << j << "]=";
            cin >> B[i][j];
       }
    cout << "Исходная матрица:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << B[i][j] << ' ';
        cout << endl;
    }
    cout << "Вевиде целое число m(m<n) " << endl;
    cin >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (i == m )
            {
                a[i][j] = B[j][i];
            }
            else
            {
                a[i][j] = B[i][j];
                }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (j == m)
            {
                a[j][i] = B[i][j];
            }
            else
            {
                a[i][j] = B[i][j];
            }
    }
    cout << "Преобразованная матрица:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[j][i] << ' ';
        cout << endl;
    }

}
//#include<iostream>
//#include<iomanip>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main() {
//    int m, n, i, j;
//    cout << "porjadok matrici: m=";
//    cin >> m;
//    cout << "index stolbca n=";
//    cin >> n;
//    int** mat = new int* [m];
//    for (i = 0; i < m; i++)mat[i] = new int[m];
//    int* mas = new int[m];
//    cout << "\n\nEnter elements\n\n";
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < m; j++) {
//            printf("mat[%d][%d]= ", i, j);
//            cin >> mat[i][j];
//            if (j == n) mas[i] = mat[i][j];
//        }
//        cout << endl;
//    }
//    cout << "\nSozdana matrica\n\n";
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < m; j++) {
//            cout << setw(4) << mat[i][j] << " ";
//        }
//        cout << "\n\n";
//    }
//    swap_ranges(mat[m - 1], mat[m - 1] + m, mas);
//    printf("\nPosle zameni %d stolbca na %d stroky\n\n", n, m - 1);
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < m; j++) {
//            if (j == n)mat[i][j] = mas[i];
//            cout <<  mat[i][j] << " ";
//        }
//        cout << "\n\n";
//    }
//}