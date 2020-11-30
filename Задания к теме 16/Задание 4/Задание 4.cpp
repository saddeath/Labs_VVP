#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <=a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
	
	for (b = 1; b <= (a/2); b++) {
		printf_s("% i\n", mass[b]);
		printf_s("% i\n", mass[a-b+1]);
	}

	if (a % 2 == 1) {
		printf_s("% i\n", mass[a/2 +1]);
	}

	return 0;
}
