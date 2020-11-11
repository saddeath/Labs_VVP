#include <stdio.h>
#include <locale.h>

int main()
{
	int A, B,C;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение A:\n");
	scanf_s("%d", &A);
	printf("Введите значение B:\n");
	scanf_s("%d", &B);
	printf("Введите значение C:\n");
	scanf_s("%d", &C);
	if ((A < B) && (B <C)) {
		printf_s("Выражение справедливо");
	}
	else {
		printf_s("Выражение несправедливо");
	}

	return 0;
}