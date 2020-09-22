#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	double a, b, sum, raz, pr, del;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления суммы, разности, произведения и частного их модулей:");
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	sum = abs(a) - abs(b);
	raz = abs(a) + abs(b);
	pr = abs(a) * abs(b);
	del = abs(a) / abs(b);
	printf_s("Сумма равна:%lf\n", sum);
	printf_s("Разность равна:%lf\n", raz);
	printf_s("Произведение равно:%lf\n", pr);
	printf_s("Частное равно:%lf\n", del);

	return 0;
}