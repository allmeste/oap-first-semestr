


#include <iostream>
#include <ctime>
using namespace std;
int* a, i, j, n, k, sum = 0;
int func_c(int* a, int n);
int otr(int* a, int n);


int* fmax(int A[], int n)
{
    int i, * pm; //указатель для результата
    for (i = 1, pm = A; i < n; i++)
        if (A[i] > * pm)
            pm = &A[i];
    return pm;
}
int main()
{
    int A[] = { 8, 4, 3, 2, 11 };
    int s = *fmax(A, 5);
    cout << s;
}
