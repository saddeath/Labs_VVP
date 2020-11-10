#include <stdio.h>
#include <locale.h>

int main()
{
	double a;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите значение в байтах:\n");
	scanf_s("%lf", &a);
	a = a / 1024;
	printf_s("Значение в килобайтах: %lf\n", a);

	return 0;

}