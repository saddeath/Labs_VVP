#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double A, B, C,AB,BC, sum;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления длины отрезков и их суммы введите координаты точки A:");
	scanf_s("%lf", &A);
	printf("Для вычесления длины отрезков и их суммы введите координаты точки B:");
	scanf_s("%lf", &B);
	printf("Для вычесления длины отрезков и их суммы введите координаты точки C:");
	scanf_s("%lf", &C);
	AB=abs(B-A);
	BC = abs(C - B);
	sum = AB + BC;
	printf_s("Сумма отрезков равна:%lf\n", sum);

	return 0;
}