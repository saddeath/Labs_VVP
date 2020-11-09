#include <stdio.h>
#include <locale.h>

int main()
{
	double  V1, V2, S, T,R;
	setlocale(LC_ALL, "Rus");
	printf(":Введите скорость первого авто \n");
	scanf_s("%lf", &V1);
	printf(":Введите скорость второго авто\n");
	scanf_s("%lf", &V2);
	printf(":Введите расстояние между авто\n");
	scanf_s("%lf", &S);
	printf(":Введите время\n");
	scanf_s("%lf", &T);
	R = S + (V1 + V2) * T;
	printf_s("расстояние между авто через Т время: %lf\n", R);

	return 0;

}