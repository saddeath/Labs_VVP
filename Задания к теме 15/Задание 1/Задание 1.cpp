#include <stdio.h>
#include <locale.h>
#include <xmemory>

void PowerA3(double A, double* B) {
	*B = A * A * A;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int z;
	for (z = 1; z <= 5; z++){
		double A, B;
		printf("Введите число :\n");
		scanf_s("%lf", &A);
		PowerA3(A, &B);
		printf_s("A в кубе равно: %lf\n", B);
	}

	return 0;
}
