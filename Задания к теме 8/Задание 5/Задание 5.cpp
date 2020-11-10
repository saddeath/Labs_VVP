#include <stdio.h>
#include <locale.h>

int main()
{
	int  x, y;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите трехзначное число:\n");
	scanf_s("%d", &x);
	y = (x % 100) * 10 + x / 100;
	printf("Перевернутое трехзначное число: %d\n", y);

	return 0;

}