#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int a,b,c;
	setlocale(LC_ALL, "Rus");
	printf("Введите первую сторону :\n");
	scanf_s("%d", &a);
	printf("Введите вторую сторону:\n");
	scanf_s("%d", &b); 
	printf("Введите третью сторону :\n");
	scanf_s("%d", &c);


	if ((pow(a,2) == (pow(b,2) + pow(c,2))) | (pow(b,2) == (pow(a,2) + pow(c,2))) | (pow(c,2) == (pow(a,2) + pow(b,2)))) {
		printf_s("Треугольник с данными сторонами является прямоугольным ");
	}
	else {
		printf_s("Трегольник с данными сторонами не является приямоугольным");
	}

	return 0;
}