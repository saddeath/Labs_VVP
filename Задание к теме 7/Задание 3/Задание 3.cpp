#include <stdio.h>
#include <locale.h>

int main()
{
	double X,Y,A,Z, K;
	setlocale(LC_ALL, "Rus");
	printf(":Введите количество конфет \n");
	scanf_s("%lf", &X);
	printf(":Введите цену за количество \n");
	scanf_s("%lf", &A);
	printf(":Введите массу конфет в кг, цену которой нужно узнать\n");
	scanf_s("%lf", &Y);
    Z = A / X;
    K= Y * Z;
	printf_s("Цена конфет за 1 кг: %lf\n", Z);
	printf_s("Цена конфет за Y кг: %lf\n", K);
	return 0;

}