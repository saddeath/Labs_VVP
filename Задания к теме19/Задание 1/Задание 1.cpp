#include <stdio.h>
#include <locale.h>

int main()
{
	int  a, b,c=0, mass[100], mass2[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	for (b = 1; b <= a; b++) {
		if (mass[b] != mass[b+1]) {
			mass2[c++] = mass[b];
		}
	}

	for (b = 0; b < c; b++)
		printf("%d: %d\n", b + 1, mass2[b]);
	

	return 0;
}