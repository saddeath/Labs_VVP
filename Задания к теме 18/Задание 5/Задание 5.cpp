﻿#include <stdio.h>
#include <locale.h>

int main()
{
	int  a, b, c, x, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
	
	x = 0;

	for (b = 1; b < a; b++) {
		if (mass[b] > mass[b + 1]) {
			x = mass[b + 1];
			mass[b + 1] = mass[b];
			mass[b] = x;
		}
	}

	for (b = 1; b <= a; b++) {
		printf("%d\n", mass[b]);
	}

	return 0;
}