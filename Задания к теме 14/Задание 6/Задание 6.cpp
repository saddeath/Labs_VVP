#include <stdio.h>
#include <locale.h>

int main()
{
	int   N, F, F1, F2, K;
	setlocale(LC_ALL, "Rus");
	printf("Введите число N:\n");
	scanf_s("%d", &N);

    F1 = 1;
    F2 = 1;
	F = 0;
    K = 2;

	while (F < N) {
		K = K + 1;
		F = F2 + F1;
		F2 = F1;
		F1 = F;
	}
	
	printf_s("число К равно: %d\n", K);

	return 0;
}
