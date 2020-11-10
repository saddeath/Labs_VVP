#include <stdio.h>
#include <locale.h>

int main()
{
	double A,B;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение A:\n");
	scanf_s("%lf", &A);
	printf("Введите значение B:\n");
	scanf_s("%lf", &B);
	if ((A > 2) and (B <= 3)) {
		printf_s("Выражение справедливо");
	}
	else {
		printf_s("Выражение несправедливо");
	}
	

	return 0;

}