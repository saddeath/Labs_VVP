#include <stdio.h>
#include <locale.h>

int main()
{
	double x, x1, y, y1, B, A;
	setlocale(LC_ALL, "Rus");
	printf("Введите A:\n");
	scanf_s("%lf", &A);
	printf("Введите B:\n");
	scanf_s("%lf", &B);

	if (A < B) {
		for (y = 1; y <= A; y++) {
			y1 = A;
			printf_s("значение равно: %lf\n", y1);
		}
		for (x = B; x >= 1; x--) {
			x1 = B;
			printf_s("значение равно: %lf\n", x1);
		}
	
	}
	else
		printf_s("ошибка");

	return 0;
}
