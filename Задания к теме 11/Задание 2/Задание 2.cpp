#include <stdio.h>
#include <locale.h>

int main()
{
	int x, y,z;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение x:\n");
	scanf_s("%d", &x);
	printf("Введите значение y:\n");
	scanf_s("%d", &y);
	printf("Введите значение z:\n");
	scanf_s("%d", &z);
	if ((x <= y) && (x <= z)) {
		printf_s("сумма двух наибольших цичел: %d\n", y+z);
	} 
	else if ((y <= x) && (y <= z)) {
		printf_s("сумма двух наибольших цичел: %d\n", x + z);
	}
	else if ((z <= x) && (z <= y)) {
		printf_s("сумма двух наибольших цичел: %d\n", x + y);
	} 

	return 0;
}