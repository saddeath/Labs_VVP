#include <stdio.h>                                              
#include <locale.h>
#include <math.h>


int main()
{
	double x, y;
	setlocale(LC_ALL, "Rus");
	printf_s("Выраженрие y=4(x-3)^6-7(x-3)^3+2:\n");
	printf_s("Введите значение переменной x:");
	scanf_s("%lf", &x);

	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	printf_s("Итоговое значение выражения: %lf", y);

	return 0;
}


