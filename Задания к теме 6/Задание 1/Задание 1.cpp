#include <stdio.h>
#include <locale.h>

int main()
{
	double a, b, c;
	setlocale(LC_ALL, "Rus");
	printf("Введите значения переменных a и b:\n");
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	c = b;
	b = a;
	a = c;
	
	printf_s("%lf\n", a);
	printf_s("%lf\n", b);

	return 0;

}