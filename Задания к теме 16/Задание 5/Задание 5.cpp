#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	b = 1;

	while (b<=a) {
		printf_s("% i\n", mass[b]);
		b = b + 2;
	}

	a = a / 2;
	for (b=a; b>= 1; b--) {
		printf_s("% i\n", mass[b*2]);
	}


	return 0;
}
