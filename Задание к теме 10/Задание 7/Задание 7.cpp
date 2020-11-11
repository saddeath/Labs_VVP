#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Rus");
	printf("Введите первую сторону :\n");
	scanf_s("%d", &a);
	printf("Введите вторую сторону:\n");
	scanf_s("%d", &b);
	printf("Введите третью сторону :\n");
	scanf_s("%d", &c);


	if ((a <( b + c)) &(b < (a + c))& (c < (a + b))) {
		printf_s("Треугольник с данными сторонами существует");
	}
	else {
		printf_s("Трегольник с данными сторонами не существует");
	}

	return 0;
}