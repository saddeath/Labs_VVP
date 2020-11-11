#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int x;
	setlocale(LC_ALL, "Rus");
	printf("Введите значение x:\n");
	scanf_s("%d", &x);
	
	if (x== 0) {
		printf("Значение числа нулевое");
	}
	else if ((x > 0) && (x%2==0)){
		printf("Значение числа положительное и четное ");
	}
	else if ((x > 0) && (x % 2 != 0)) {
		printf("Значение числа положительное и нечетное");
	}
	else if ((x < 0) && (x % 2 != 0)) {
		printf("Значение числа отрицательное и нечетное");
	}
	else if ((x < 0) && (x % 2 == 0)) {
		printf("Значение числа отрицательное и четное");
	}
		
	return 0;
}
