#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int  A,B,C,x, y;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите значение A:\n");
	scanf_s("%d", &A);
	printf("Ввеите значение B:\n");
	scanf_s("%d", &B);
	printf("Ввеите значение C:\n");
	scanf_s("%d", &C);
    x = (A / C) * (B / C);
	y = A * B - x * sqrt(C);
	printf("количество квадратов: %d\n", x);
    printf("Не занятая площадь: %d\n", y);

	return 0;

}