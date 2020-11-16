#include <stdio.h>
#include <locale.h>

int main()
{
	double x, y, N;
	setlocale(LC_ALL, "Rus");
	printf("Введите N:\n");
	scanf_s("%lf", &N);

	x = 0;
	for (y = 1; y <= N; y++) {
		x = x + (2 * y - 1);
	}
	printf_s("Квадрат равен: %lf\n", x);

	return 0;
}
