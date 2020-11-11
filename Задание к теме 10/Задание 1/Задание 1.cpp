#include <stdio.h>
#include <locale.h>

int main()
{
	int A,B;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение A:\n");
	scanf_s("%d", &A);
	printf("Введите значение B:\n");
	scanf_s("%d", &B);
	if ((A > 2) && (B <= 3)) {
		printf_s("Выражение справедливо");
	}
	else {
		printf_s("Выражение несправедливо");
	}

	return 0;
}