#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    double L, d, π = 3.14;
    printf_s("Введите значение диаметра:");
    scanf_s("%lf", &d);
    L = π*d;
    printf_s("Длина окружности равна:%lf\n", L);
    return 0;
}
