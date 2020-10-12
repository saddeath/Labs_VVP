#include <stdio.h>                                              
#include <locale.h>
#include <math.h>


int main()
{
	double A, x, y;
	setlocale(LC_ALL, "Rus");
	printf_s("Введите значение переменной A:");
	scanf_s("%lf", &A);

	x = A * A;
	y = A * A * A ;
	A = y * y * y * x * x * x;
	

	printf_s("Итоговое значение выражения: %lf", A);

	return 0;
}
