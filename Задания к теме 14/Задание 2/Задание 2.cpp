#include <stdio.h>
#include <locale.h>

int main()
{
	double  B, A;
	setlocale(LC_ALL, "Rus");
	printf("Введите A:\n");
	scanf_s("%lf", &A);
	printf("Введите B:\n");
	scanf_s("%lf", &B);
    
	while ((A - B) >= 0) {
		A = A - B;
	}

	printf_s("Значение незанятой части А: %lf\n", A);
	return 0;
}
