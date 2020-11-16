#include <stdio.h>
#include <locale.h>
#include <xmemory>

int Sign(double X)
{
	if (X < 0) {
		return -1;
	}
	if (X == 0) {
		return 0;
	}
	if (X > 0) {
		return 1;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	printf("Введите число :\n");
	scanf_s("%lf", &A);
	printf("Введите число :\n");
	scanf_s("%lf", &B);
	printf_s("Значение равно: %d\n", (Sign(A) + Sign(B)));
	

	return 0;
}
