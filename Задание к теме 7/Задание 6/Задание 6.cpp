#include <stdio.h>
#include <locale.h>

int main()
{
	double  A1, A2, B1, B2,C1,C2,d, x,y;
	setlocale(LC_ALL, "Rus");
	printf(":Введите значение А1 \n");
	scanf_s("%lf", &A1);
	printf(":Введите значение А2\n");
	scanf_s("%lf", &A2);
	printf(":Введите значение В1 \n");
	scanf_s("%lf", &B1);
	printf(":Введите значение В2 \n");
	scanf_s("%lf", &B2);
	printf(":Введите значение С1 \n");
	scanf_s("%lf", &C1);
	printf(":Введите значение С2 \n");
	scanf_s("%lf", &C2);

    d = A1 * B2 - A2 * B1; 
    x = (C1 * B2 - C2 * B1) / d;
    y = (A1 * C2 - A2 * C1) / d;

	printf_s("решение системы уравнения : %lf\n", x);
	printf_s("решение системы уравнения : %lf\n", y );

	return 0;

}
