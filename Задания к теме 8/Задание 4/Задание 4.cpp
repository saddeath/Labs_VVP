#include <stdio.h>
#include <locale.h>

int main()
{
	int  x, y;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите двузначное число:\n");
	scanf_s("%d", &x);
    y = (x / 10) + (x % 10) * 10;
	printf("Перевернутое двузначное число: %d\n", y);

	return 0;

}