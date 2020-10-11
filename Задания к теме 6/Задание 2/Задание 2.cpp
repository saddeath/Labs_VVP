#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double A, B, C;
	setlocale(LC_ALL, "Rus");
	printf("Введите значения переменных a и b:\n");
	scanf_s("%lf", &A);
	scanf_s("%lf", &B);
	scanf_s("%lf", &C);
	A = A + B;
	B = A - B;
	A = A - B;
	C = C + A;
	A = C - A;
	C = C - A;

	printf_s("%lf\n", A);
	printf_s("%lf\n", B);
	printf_s("%lf\n", C);

	return 0;

}
