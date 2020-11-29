#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b,c,x, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество членов геометрической прогрессии :\n");
	scanf_s("%d", &a);
	printf("Введите первый член геометрической прогрессии :\n");
	scanf_s("%d", &b);
	printf("Введите знаменатель геометрической прогрессии :\n");
	scanf_s("%d", &c);

	mass[1] = b;
	for (x = 2; x <= a; x++) {
		mass[x] = mass[x - 1] * c;
	}
	printf_s("Количество первых членнов прогрессии % i\n", a);

	for (x = 1; x <= a; x++) {
		printf_s("% i\n", mass[x]);
	}


	return 0;
}