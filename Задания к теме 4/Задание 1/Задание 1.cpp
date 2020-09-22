#include <stdio.h>
#include <locale.h>

int main()
{
	double a,b,S,P;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления периметра и площади прямоугольника введите длину и ширину:\n");
	scanf_s("%lf",&a);
	scanf_s("%lf",&b);
	P = 2 * (a + b);
	S = a * b;
	printf_s("Периметр равен: %lf\n", P);
	printf_s("Площадь равна: %lf\n", S);

	return 0;

}