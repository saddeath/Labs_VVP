#include <stdio.h>                                              
#include <locale.h>
#include <math.h>


int main()
{
	double x, y;
	setlocale(LC_ALL, "Rus");
	printf_s("Выраженрие y = 3x^6-6x^2-7 :\n");
	printf_s("Введите значение переменной x:");
	scanf_s("%lf", &x);

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf_s("Итоговое значение выражения: %lf", y);

	return 0;
}


