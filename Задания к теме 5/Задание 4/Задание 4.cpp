#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x1, x2, y1, y2,p,s;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления периметра и площади данного прямоугольника введите координаты первой вершины(x1;y1):");
	scanf_s("%lf", &x1);
	scanf_s("%lf", &y1);
	printf("Для вычесления периметра и площади данного прямоугольника введите координаты второй вершины(x2;y2):");
	scanf_s("%lf", &x2);
	scanf_s("%lf", &y2);
	p = 2 * (fabs(x2 - x1) + fabs(y2 - y1));
	s = fabs(x2 - x1) * fabs(y2 - y1);
	printf_s("Периметр прямоугольника равен:%lf\n", p);
	printf_s("Площадь прямоугольника равна:%lf\n", s);

	return 0;
}