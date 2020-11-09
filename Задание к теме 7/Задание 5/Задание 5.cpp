#include <stdio.h>
#include <locale.h>

int main()
{
	double  A,x,B;
	setlocale(LC_ALL, "Rus");
	printf(":Введите значение А \n");
	scanf_s("%lf", &A);
	printf(":Введите значение В\n");
	scanf_s("%lf", &B);
	x = -B / A;
	printf_s("решение линейного уравнения : %lf\n", x);

	return 0;

}
