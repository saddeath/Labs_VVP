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
	y = pow(A, 3);
	x = x * y;
	y = x * x;
	A = y * x;

	printf_s("Итоговое значение выражения: %lf", A);

	return 0;
}
