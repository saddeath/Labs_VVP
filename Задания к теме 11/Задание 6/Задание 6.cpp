#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int x;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение x:\n");
	scanf_s("%d", &x);

	if ((x > 0) && (x < 10) && (x % 2 != 0)) {
		printf("Число однозначное и нечетное ");
	}
	else if ((x > 0) && (x < 10) && (x % 2 == 0)) {
		printf("Число однозначное и четное ");
	}
	else if ((x > 9) && (x < 100) && (x % 2 != 0)) {
		printf("Число двузначное и нечетное");
	}
	else if ((x > 9) && (x < 100) && (x % 2 == 0)) {
		printf("Число двузначное и четное");
	}
	else if ((x < 1000) && (x >99) && (x % 2 != 0)) {
		printf("Чичло трехзначное и нечетное");
	}
	else if ((x < 1000) && (x > 99) && (x % 2 == 0)) {
		printf("Чичло трехзначное и четное");
	}
	
	return 0;
}