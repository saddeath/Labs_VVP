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
	x = x * pow(A,3);
	A = x * pow(A,3);

	printf_s("Итоговое значение выражения: %lf", A);

	return 0;
}


