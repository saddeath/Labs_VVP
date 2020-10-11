#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double a, b;
	setlocale(LC_ALL, "Rus");
	printf("Введите значения переменных a и b:\n");
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	a = a + b;
	b = a - b;
	a = a - b;

	printf_s("%lf\n", a);
	printf_s("%lf\n", b);

	return 0;

}