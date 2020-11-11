#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double x,y;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение x:\n");
	scanf_s("%lf", &x);
	printf("Введите значение y:\n");
	scanf_s("%lf", &y);

	if ((x > 0) && (y > 0)) {
		printf_s("Точка лежит в 1 координатной четверти");
	}
	else if ((x < 0) && (y > 0)) {
		printf_s("Точка лежит в 2 координатной четверти");
	}
	else if ((x < 0) && (y < 0)) {
		printf_s("Точка лежит в 3 координатной четверти");
	}
	else if ((x > 0) && (y < 0)) {
		printf_s("Точка лежит в 3 координатной четверти");
	} 

	return 0;
}
