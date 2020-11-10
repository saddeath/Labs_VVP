#include <stdio.h>
#include <locale.h>

int main()
{
	int  x, y;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите день:\n");
	scanf_s("%d", &x);
	y = x % 7;
	printf("Номер дня: %d\n", y);

	return 0;

}
