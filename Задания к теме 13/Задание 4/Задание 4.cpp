#include <stdio.h>
#include <locale.h>

int main()
{
	double x,x1, y, N,A;
	setlocale(LC_ALL, "Rus");
	printf("Введите N:\n");
	scanf_s("%lf", &N);
	printf("Введите А:\n");
	scanf_s("%lf", &A);

	x = 1;
	x1 = 1;

	for (y = 1; y <= N; y++) {
		x1 = x1 * A;
		x = x + x1;
	}
	printf_s("сумма равна: %lf\n", x);

	return 0;
}
