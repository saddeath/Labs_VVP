#include <stdio.h>
#include <locale.h>

int main()
{
	int x;
	setlocale(LC_ALL, "Rus");
	printf("Введите число :\n");
	scanf_s("%d", &x);

	if ((((x % 10) > ((x % 100) / 10)) && ((x % 100) / 10 > (x / 100))) || (((x % 10) < ((x % 100) / 10)) && ((x % 100) / 10 < (x / 100)))) {
		printf_s("Введенное число удволетворяет условиям ");
	} else {
		printf_s("Введенное число не удовлетворяет условиям");
	}

	return 0;
}