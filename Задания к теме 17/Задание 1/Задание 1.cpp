#include <stdio.h>
#include <locale.h>

int main()
{
	int  a,b,c, d, x, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
	printf("Введите c :\n");
	scanf_s("%d", &c);
	printf("Введите d :\n");
	scanf_s("%d", &d);

	x = 0;
	for (b = c; b <= d; b++) {
		x = x + mass[b];
	}
    
	printf_s("% d\n", x / (d - c + 1));

	return 0;
}
