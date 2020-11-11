#include <stdio.h>
#include <locale.h>

int main()
{
	int A, B;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение A:\n");
	scanf_s("%d", &A);
	printf("Введите значение B:\n");
	scanf_s("%d", &B);
	if (A > B) {
		B = A;
	}else if (A < B) {
		      A = B;
	} else {
		A = 0;
		B = 0;
	}
	printf_s("Значение переменной А: %d\n", A);
	printf_s("Значение переменной В: %d\n", B);
	
	return 0;
}