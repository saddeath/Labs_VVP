#include <stdio.h>
#include <locale.h>

int main()
{
	int  a, b, c, mass[100], mass2[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass2[%d] = ", b);
		scanf_s("%d", &mass2[b]);
	}

	for (b = 1; b <= a; b++) {
		mass[b] = mass[b] + mass2[b];
		mass2[b] = mass[b] - mass2[b];
		mass[b] = mass[b] - mass2[b];
	}

	for (b = 1; b <= a; b++) {
		printf("Первыфй измененный массив :%d\n", mass[b]);
	}

	for (b = 1; b <= a; b++) {
		printf("Второй измененный массив :%d\n", mass2[b]);
	}



	return 0;
}