#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double A,B,C;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение A:\n");
	scanf_s("%lf", &A);
	printf("Введите значение B:\n");
	scanf_s("%lf", &B);
	printf("Введите значение C:\n");
	scanf_s("%lf", &C);
	if ((fabs(A - B)) < fabs(A - C)) {
		printf_s("Ближе к точке А находится точка В: %lf\n", fabs(A-B));
	} 
	else {
		printf_s("Ближе к точке А находится точка C: %lf\n", fabs(A - C));
	}

	return 0;
}