#include <iostream>
#include <clocale>

double RingS(double R1, double R2)
{
	return pow(R1, 2) * 3.14 - pow(R2, 2) * 3.14;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double R1, R2, z;
	for (z = 0; z < 3; z++)
	{
		printf("Введите радиус окружности 1 \n");
		scanf_s("%lf", &R1);
		printf("Ведите радиус окружности 2 \n");
		scanf_s("%lf", &R2);

		if (R1 > R2) {
			printf_s("площадь кольца равна : %lf\n", RingS(R1, R2));
		}
		else {
			printf_s("ошибка");
		}


	}
	return 0;
}
