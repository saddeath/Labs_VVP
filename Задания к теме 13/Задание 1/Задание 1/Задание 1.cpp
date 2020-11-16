#include <stdio.h>
#include <locale.h>

int main()
{
	double x,y;
	setlocale(LC_ALL, "Rus");
	printf("Цена конфет за 1 кг:\n");
	scanf_s("%lf", &x);

	for (y = 0; y < 10; y++) {
		printf_s("стоимость конфет: %lf\n", y / (10 * x));

	}
		
	return 0;
}
