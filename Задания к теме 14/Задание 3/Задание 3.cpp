#include <stdio.h>
#include <locale.h>

int main()
{
	double  N,K,x;
	setlocale(LC_ALL, "Rus");
	printf("Введите число N:\n");
	scanf_s("%lf", &N);

	K = 0;
	x = 0;
	while (x<N) {
		K = K + 1;
		x = K + x;
	}

	printf_s("число равно: %lf\n", K);
	printf_s("сумма равна: %lf\n", x);
	return 0;
}
