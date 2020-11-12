#include <stdio.h>
#include <locale.h>

int main()
{
	int  x, y,z;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите день:\n");
	scanf_s("%d", &x);
	printf("Ввеите номер днz, который будет присвоен 1 января:\n");
	scanf_s("%d", &y);
	z = (((x-1) + (y - 1)) % 7) + 1;
	printf("день недели: %d\n", z);

	return 0;

}