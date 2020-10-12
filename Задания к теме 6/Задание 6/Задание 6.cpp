#include <stdio.h>                                              
#include <locale.h>
#include <math.h>


int main()
{
	double A, x;
	setlocale(LC_ALL, "Rus");
	printf_s("Введите значение переменной A:");
	scanf_s("%lf", &A);

	x = A * A;
	A = x * x * x * x;

	printf_s("Итоговое значение выражения: %lf", A);

	return 0;
}


