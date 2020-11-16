#include <iostream>
#include <clocale>


void Quarter(int x, int y)
{
	if ((x > 0) && (y > 0)){
		printf("Точка лежит в 1-ой координатной плоскости \n");
	}
	else if ((x < 0) && (y>0)) {
		printf("очка лежит во 2-ой координатной плоскости \n");
	}
	else if ((x < 0) && (y < 0)){
		printf("ТТочка лежит в 3-ей координатной плоскости \n");
	}
	else if ((x > 0) && (y < 0)){
		printf("Точка лежит в 4-ой координатной плоскости \n");
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, z;
	for (z = 0; z <= 3; z++)
	{
		printf("Введите значение переменной \n");
		scanf_s("%d", &x);
		printf("Введите значение переменной \n");
		scanf_s("%d", &y);
		if ((x != 0) && (y != 0)){
			Quarter(x, y);
		}
		else{
			printf_s("ошибка");
		}


	}
	return 0;
}
