#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, c, x, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &c);
	printf("Введите a :\n");
	scanf_s("%d", &a);
	printf("Введите b :\n");
	scanf_s("%d", &b);

	mass[1] = a;
	mass[2] = b;
	mass[3] = a + b;
	for (x = 4; x <= c; x++) {
		mass[x] = mass[x - 1] * 2;
	}

	for (x = 1; x <= c; x++) {
		printf_s("% i\n", mass[x]);
	}

	return 0;
}
