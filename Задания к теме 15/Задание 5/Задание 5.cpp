#include <iostream>
#include <clocale>


int Fact2(int N)
{
	int x, y;
	if (N % 2 == 0){
		x = 1;
		y = 2;
		while (N > 0){
			x = x * y;
			y = y + 2;
			N = N - 2;
		}
		return x;
	}
	else{
		x = 1;
		y = 1;
		while (N > 0){
			x = x * y;
			y = y + 2;
			N = N - 2;
		}
		return x;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	printf_s("Введите число N \n");
	scanf_s("%d", &N);

	if (N > 0){
		printf_s("факториал N : %d", Fact2(N));
	}
	else{
		printf_s("ошибка");
	

	}
	return 0;
}