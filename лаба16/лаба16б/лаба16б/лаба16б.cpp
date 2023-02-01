//#include< iostream>
//#include <windows.h>
//using namespace std;
//
//int& fun(char tmp[], const int MaxSize)
//{
//	int flag;
//	for (int i = 0; i< MaxSize; i++)
//	{
//		if (tmp[i] == 'Б')
//		{
//			if (tmp[i + 1] == 'Г')
//				if (tmp[i + 2] == 'Т')
//					if (tmp[i + 3] == 'У')
//					{
//						flag = 1;
//						break;
//					}
//		}
//		else
//			flag = 0;
//	}
//	return flag;
//}
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	const int MaxSize = 256;
//	char tmp[MaxSize];
//	cout << "Ведите текст " << endl;
//	cin.getline(tmp, MaxSize);
//	if (fun(tmp, MaxSize) == 1)
//		cout<<  "В тескте есть слово 'БГТУ' "<<endl;
//	else
//		cout<< " В тескте нет слова 'БГТУ' "<<endl;
//}

//Лера, [21.12.20 00:04]
//#include <iostream>
//#include <windows.h>
//#include <math.h>
//
//using namespace std;
//
////прототипы функций
//void vivod_mas(float*, int);
//int func_c(float*, int);
//float func_pr_of_fabs_max(float&, int);
//void func_str(char str[]);
//
//int main(void)
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    setlocale(LC_ALL, "Russian");
//    system("color F5");
//    int choice, flag = 1;
//    int i, n, countOfC = 0, index;
//    float* arr, c, max, pr = 1;
//    int size = 0, j = 0;
//    char str[50];
//
//    cout << "Введите размер массива" << endl;
//    cin >> n;
//    if (n < 0)
//    {
//        cout << "Размер массива не может быть отрицательным!" << endl;
//        exit(0);
//    }
//    arr = new float[n];
//    if (arr == 0) //проверка факта выделения памяти
//    {
//        cout << endl << "Недостаточно памяти";
//        exit(0);
//    }
//    cout << "Введите массив: ";
//    for (i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    cout << "Введите строку: ";
//    cin.ignore(cin.rdbuf()->in_avail());
//    gets_s(str);
//    while (flag != 0)
//    {
//        cout << endl << "Выберите, что хотите сделать с массивом" << endl;
//        cout << "1 - вывод одномерного массива" << endl;
//        cout << "2 - вычислить количество элементов массива, больших некоторого заданного числа С" << endl;
//        cout << "3 - произведение элементов массива, расположенных после максимального по модулю элемента" << endl;
//        cout << "4 - работа со строкой. изменение всех английских стройчных букв до первого пробела на заглавные" << endl;
//        cout << "5 - выход" << endl;
//        cin >> choice;
//        switch (choice)
//        {
//        case 1:
//            vivod_mas(arr, n);
//            break;
//        case 2:
//            countOfC = func_c(arr, n);
//            cout << "Количество элементов, больших элемента с:" << countOfC;
//            cout << endl;
//            break;
//        case 3:
//            pr = func_pr_of_fabs_max(*arr, n);
//            cout << endl << "Произведение элементов, стоящих после максимального элемента массива:" << pr;
//            cout << endl;
//            break;
//        case 4:
//            func_str(str);
//            break;
//        case 5:
//            flag = 0;
//            break;
//        default:
//            cout << "Такого варианта нет, выберите снова" << endl;
//            cout << endl;
//            break;
//        }
//    }
//    delete[] arr;
//    return 0;
//}
//
//void vivod_mas(float arr[], int n)
//{
//    cout << endl << "Вывод массива: ";
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << ' ';
//    }
//    cout << endl;
//}
//
//int func_c(float* arr, int n)
//{
//    int c, countOfC = 0;
//    cout << endl << "Введите элемент с: ";
//    cin >> c;
//    cout << endl;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] > c)
//        {
//            countOfC++;
//        }
//    }
//    return countOfC;
//}
//
//float func_pr_of_fabs_max(float& arr, int n)
//{
//    float max, pr = 1;
//    int index = 0, i;
//    float* p = &arr;
//    max = p[0];
//    for (i = 0; i < n; i++)
//    {
//        if (fabs(p[i]) > fabs(max))
//        {
//            max = p[i];
//            index = i;
//        }
//    }
//    for (i = index + 1; i < n; i++)
//    {
//        pr *= p[i];
//    }
//    return pr;
//}
//
//void func_str(char str[])
//{
//    int size = 0, j = 0;
//    while (str[j] != '\0')
//    {
//        size++;
//        j++;
//    }
//    for (int j = 0; j <= size; j++)
//    {
//        if ('а' <= str[j] && str[j] <= 'я')
//        {
//            str[j] = char(((int)str[j]) - 'а' + 'А');
//        }
//        else
//        {
//            if (str[j] == ' ')
//            {
//                break;
//            }
//        }
//    }
//    for (int j = 0; j <= size; j++)
//    {
//        cout << str[j];
//    }
//}



#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>
using namespace std;

int fmin(int n, ...)
{
	int* p = &n;
	int min = p[0], nom;
	for (int i = 0; i <= 5; i++)
		if (p[i] < min)
		{
			min = p[i];
			nom = i;
		}

	return (nom);
}
int fsum(int n, ...)
{
	int* p = &n;
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (p[i] < 0)
			for (int j = i; j < (n + 1) - i; j++)
			{
				sum = sum + p[j + 1];
			}

	return (sum);
}
int& fun(char tmp[], const int MaxSize)
{
	int flag;
	for (int i = 0; i < MaxSize; i++)
	{
		if (tmp[i] == 'Б')
		{
			if (tmp[i + 1] == 'Г')
				if (tmp[i + 2] == 'Т')
					if (tmp[i + 3] == 'У')
					{
						flag = 1;
						break;
					}
		}
		else
			flag = 0;
	}
	return flag;
}
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int MaxSize = 256;
	char tmp[MaxSize];
	cout << "Ведите текст " << endl;
	cin.getline(tmp, MaxSize);
	int k, c = 1;
	float* a;
	int size = 0, j = 0,i,n;
    char str[50];
	cout << "Введите размер массива" << endl;
	    cin >> n;
	    a = new float[n];
	    if (a == 0) //проверка факта выделения памяти
	    {
	        cout << endl << "Недостаточно памяти";
	        exit(0);
	    }
	cout << "Введите массив: ";
	    for (i = 0; i < n; i++)
	    {
	        cin >> a[i];
	    }
	while (c != 0)
	{
		cout << "Что желаете сделать?" << endl
			<< "1-получить номер минимального элемента для массива (12, 3, -40, 54, 1)" << endl
			<< "2-получить сумма модулей после отрицательного элемента  для массива(4, -10, 40, 20, 12)" << endl
			<< "3-Проверить,есть ли в ведённом тексте слово 'БГТУ'" << endl
			<< "4 - выход" << endl;
		cin >> k;
		switch (k) {
		case 1:cout << "Номер минимального элемента " << fmin(12, 3, -40, 54, 1) << endl; break;
		case 2: cout << endl << "Сумма модулей после отрицательного элемента " << fsum(4, -10, 40, 20, 12) << endl; break;
		case 3:if (fun(tmp, MaxSize) == 1)
			cout << "В тескте есть слово 'БГТУ' " << endl;
			  else
			cout << " В тескте нет слова 'БГТУ' " << endl;
		case 4:	 c = 0;
			break;
		default:
			cout << " Нет такой опции, выберите снова" << endl;
			cout << endl;
			break;
		}
	}
}
