#include <stdio.h>
#include <locale.h>

int main()
{
	double a, b;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления среднего арифмитического введите значения переменных:\n");
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	printf_s("Значение среднего арифметического равно: %lf\n", (a + b) / 2);

	return 0;

}