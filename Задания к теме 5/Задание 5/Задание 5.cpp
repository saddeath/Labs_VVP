#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
	double x1, x2, x3, y1, y2, y3, a1, a2, a3, p, P, S;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления периметра и площади данного треугольника введите координаты первой вершины(x1;y1):");
	scanf_s("%lf", &x1);
	scanf_s("%lf", &y1);
	printf("Для вычесления периметра и площади данного треугольника введите координаты второй вершины(x2;y2):");
	scanf_s("%lf", &x2);
	scanf_s("%lf", &y2);
	printf("Для вычесления периметра и площади данного треугольника введите координаты третьей вершины(x3;y3):");
	scanf_s("%lf", &x3);
	scanf_s("%lf", &y3);
	a1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	a2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	a3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	P = a1 + a2 + a3;
	p = P / 2;
	S = sqrt(p * (p - a1) * (p - a2) * (p - a3));
	printf_s("Периметр треугольника равен:%lf\n", P);
	printf_s("Площадь треугольника равна:%lf\n", S);

	return 0;
}