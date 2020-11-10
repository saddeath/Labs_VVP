#include <stdio.h>
#include <locale.h>

int main()
{
	int  x, y;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите количество секунд:\n");
	scanf_s("%d", &x);
	y = x % 60;
	printf("количество секунд, прошедших с начала последней минуты: %d\n", y);

	return 0;

}