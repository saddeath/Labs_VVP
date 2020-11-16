#include <stdio.h>
#include <locale.h>

int main()
{
	double x,y, N;
	setlocale(LC_ALL, "Rus");
	printf("Введите N:\n");
	scanf_s("%lf", &N);

	x = 1;
	for (y = 1; y <= N; y++) {
		x = x * (1 + 0.1 * y);
	}
	printf_s("Произведение равно: %lf\n", x);

	return 0;
}
