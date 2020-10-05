#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x1, x2, y1, y2,R;
	setlocale(LC_ALL, "Rus");
	printf("Для вычесления расстояния между точками введите координаты первой точки(x1;y1):");
	scanf_s("%lf", &x1);
	scanf_s("%lf", &y1);
	printf("Для вычесления расстояния между точками введите координаты второй точки(x2;y2):");
	scanf_s("%lf", &x2);
	scanf_s("%lf", &y2);
	R = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	printf_s("Расстояние между точками равно:%lf\n", R);

	return 0;
}