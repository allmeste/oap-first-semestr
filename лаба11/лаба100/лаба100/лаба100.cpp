#include <iostream>
void main()

{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    char tmp[33];
    short int i; 
    short  a;
    short int mask = 16;  
    short int num = 0;  
    cout << "Введите число А " << endl;
    cin >> a;
    _itoa_s(a, tmp, 2);
    cout <<"Число А в двоичной системе: "<< tmp << endl;
    for (i = 0; i <= 5; i++)
    { 
         
        if ((mask & a) == mask)
        {
            num++;
        }
        mask = mask << 1;
    }
    cout <<"Количество единиц с 5 по 10 бит:   "<< num << endl;
}
