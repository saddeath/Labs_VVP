#include <stdio.h>
#include <locale.h>

int main()
{
	double a;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления значения угла в радианах, введите значение этого же угла в градусах:\n");
	scanf_s("%lf", &a);
	a = a * 3.14 / 180;
	printf_s("Значение угла в радианах равно: %lf\n", a);

	return 0;

}