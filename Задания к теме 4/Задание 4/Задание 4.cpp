#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	double a, b, sum, raz, pr, del;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления суммы, разности, произведения и частного их квадратов:\n");
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	sum = pow(a, 2) + pow(b, 2);
	raz = pow(a, 2) - pow(b, 2);
	pr = pow(a, 2) * pow(b, 2);
	del = pow(a, 2) / pow(b, 2);
	printf_s("Сумма равна:%lf\n", sum);
	printf_s("Разность равна:%lf\n", raz);
	printf_s("Произведение равно:%lf\n", pr);
	printf_s("Частное равно:%lf\n", del);

	return 0;
}