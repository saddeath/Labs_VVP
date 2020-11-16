#include <stdio.h>
#include <locale.h>

int main()
{
	int  A,B;
	setlocale(LC_ALL, "Rus");
	printf("Введите число A:\n");
	scanf_s("%d", &A);
	printf("Введите число B:\n");
	scanf_s("%d", &B);

	while ((A != 0) and (B !=0)) {
		if (A > B) {
			A = A % B;
		}
		else
			B = B % A;
	}

	printf_s("НОД равен: %d\n", A+B);

	return 0;
}
