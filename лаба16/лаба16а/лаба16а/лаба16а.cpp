#include <iostream>
using namespace std;
int sozdmass(int& a, int& b, int** A) {
	int i = 0, j = 0, c = 0;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			A[i][j] = rand() % 30 - 5;
			printf("%d\t", A[i][j]);
			if (j == b - 1) { //Переход на строку в конце матрицы 
				printf("\n");
			}
		}
	}
	return 0;
}
int proverkaizamena(int& a, int& b, int** A) {
	int i, j, c = 0, k = -1, temp;
	for (j = 0; j < b; j++) {
		for (i = 0; i < a; i++) {
			if (A[i][j] < 0) {//Счётчик отрицательных чисел
				c++;
			}
			if (k == -1) {//Чтобы код выпонялся один раз
				if (i == a - 1 && c == 0) { //
					k += 1;
					for (i = 0, j = j - 1; i < a; i++) {
						temp = A[i][j];
						A[i][j] = abs(temp);
					}
				}
			}
			if (i == a - 1) { //Возвращает значение счётчику в конце столбца
				c = 0;
			}
		}
	}
	return 0;
}
int vivod(int& a, int& b, int** A) {
	int i, j;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			//printf("A[%d,%d]=%d ", i, j, A[i][j]);
			printf("%d\t", A[i][j]);
			if (j == b - 1) { //Переход на строку в конце матрицы 
				printf("\n");
			}
		}
	}
	return 0;
}
int main()
{
	int a = 5, b = 5, i;
	int** A = new int* [a];
	for (i = 0; i < a; i++) {
		A[i] = new int[b];
	}
	sozdmass(a, b, A);
	proverkaizamena(a, b, A);
	printf("\n\n\n\n\n");
	vivod(a, b, A);
}