#include <stdio.h>
#include <locale.h>

int main()
{
	double A,B, x;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите значение A:\n");
	scanf_s("%lf", &A);
	printf("Ввеите значение B:\n");
	scanf_s("%lf", &B);
	if (A > B) {
		x = A / B;
	}
	printf_s("Количество отрезков В, которые помещаются в А: %lf\n", x);

	return 0;

}