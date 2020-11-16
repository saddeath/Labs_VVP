#include <stdio.h>
#include <locale.h>

int main()
{
	double  P,S,K;
	setlocale(LC_ALL, "Rus");
	printf("Введите число P:\n");
	scanf_s("%lf", &P);

	K = 0;
	S = 1000;
	while (S<=1100) {
		S = S * (P / 100 + 1);
		K = K + 1;
	}

	printf_s("количсетво месяцев: %lf\n", K);
	printf_s("итоговый размер вклада: %lf\n", S);

	return 0;
}
