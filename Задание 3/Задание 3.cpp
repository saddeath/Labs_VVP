#include <stdio.h>
#include <locale.h>

int main()
{
	int x;
	setlocale(LC_ALL, "Rus");
	printf("Введите число :\n");
	scanf_s("%d", &x);
	
	if ((x < 100) && (x > 9) && (x % 2 == 0)) {
		printf_s("Введенное число двузначное и четное ");
	}
	else {
		printf_s("Введенное число не удовлетворяет условиям");
	}

	return 0;
}