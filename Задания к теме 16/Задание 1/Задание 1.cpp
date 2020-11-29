#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, mass[10];
	setlocale(LC_ALL, "Rus");
	printf("Введите значение a :\n");
	scanf_s("%d", &a);

	mass[1] = 1;
	for (b = 2; b <= a; b++){
		mass[b]= mass[b - 1] + 2;
	}

	for (b = 2; b <= a; b++){
		printf_s(" % i\n",mass[b]);
	}


	return 0;
}