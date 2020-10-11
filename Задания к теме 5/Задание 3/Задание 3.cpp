#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double A, B, C, AB, BC, pro ;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления длины отрезков и их произведения введите координаты точки A:");
	scanf_s("%lf", &A);
	printf("Для вычесления длины отрезков и их произведения введите координаты точки B:");
	scanf_s("%lf", &B);
	printf("Для вычесления длины отрезков и их произведения введите координаты точки C:");
	scanf_s("%lf", &C);
	if ((C > A and C < B) or (C<A and C>B)) {
		AB = fabs(B - A);
		BC = fabs(C - B);
		pro = AB * BC;
		printf_s("Произведение отрезков равно:%lf\n", pro);
	}
	else {
		printf("Невозможно произвести вычесления, так как точка C не находится между A и B");

	}

	return 0;
}