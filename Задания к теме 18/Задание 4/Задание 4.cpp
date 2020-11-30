#include <stdio.h>
#include <locale.h>

int main()
{
	int  a, b, x,y, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	x = 1;

	for (b = 1; b <= a; b++) {
		if (mass[x] <mass[b]) {
			x = b;
		}
	}

	y = x;

	for (b = 1; b <= a; b++) {
		if (mass[y] > mass[b]) {
			y = b;
		}
	}

	if (x > y) {
		for (b = y+1; b <= x-1; b++) {
			mass[b] = 0;
		}
	}else
		for (b = x + 1; b <= y - 1; b++) {
			mass[b] = 0;
		}

	for (b = 1; b <= a; b++) {
		printf(" массив :%d\n", mass[b]);
	}

	return 0;
}