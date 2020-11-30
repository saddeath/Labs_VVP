#include <stdio.h>
#include <locale.h>

int main()
{
	int  a, b, c, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}
    c = mass[2] - mass[1];
	b = 2;

	while ((mass[b] - mass[b - 1]) == c) {
		b = b + 1;
	}

	if (b == a + 1) {
		printf_s("Массив является арифметической прогрессией: %d\n", c);
	}
	else
		printf_s("Этот массив не является арифметической прогрессией:\n 0\n");
	    

	return 0;
}
