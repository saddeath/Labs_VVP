#include <stdio.h>
#include <locale.h>

int main()
{
	int  a, b, c=0, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
	for (b = 1; b <= a; b++) {
		if (mass[b] % 2 != 0) {
			c = mass[b];
		}
	}
	
	if (c > 0) {
		for (b = 1; b <= a; b++) {
			if (mass[b] % 2 != 0) {
				mass[b] = mass[b] + c;
			}
		}
	}

	for (b = 1; b <= a; b++) {
		printf(" массив :%d\n", mass[b]);
	}

	return 0;
}