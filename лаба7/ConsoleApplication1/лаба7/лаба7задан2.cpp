#include<iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "rus");
    
    for (int i = 100; i < 1000; i++)
    {
        int a, b, c;
        a = i/100;
        b = (i-a*100)/10;
        c = i-a*100-b*10 ;
        if (a != b && a != c && b != c)
            cout << endl << i;
    }
        system("pase");
    }
 
