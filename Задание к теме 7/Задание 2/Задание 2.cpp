#include <stdio.h>
#include <locale.h>

int main()
{
	double a;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления значения угла в градусах, введите значение этого же угла в радианах:\n");
	scanf_s("%lf", &a);
	a = a * 180 / 3.14;
	printf_s("Значение угла в радианах равно: %lf\n", a);

	return 0;

}