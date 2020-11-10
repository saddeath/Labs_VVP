#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int  A, B, C, x, y;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите номер года:\n");
	scanf_s("%d", &x);
	y = ((x - 1) / 100) + 1;
	printf("Столетие : %d\n", y);
	

	return 0;

}