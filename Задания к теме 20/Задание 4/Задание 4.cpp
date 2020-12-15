#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{

    float mass[10][2],c,k=0;
    int a, b, n;
    setlocale(LC_ALL, "Russian");
    printf("Введите значение n: ");
    scanf_s("%d", &n);

    for (a = 0; a < n; ++a) {
        printf("mass[%d]:\n", a + 1);
        printf("Введите  x : ");
        scanf_s("%f", &mass[a][0]);
        printf("Введите   y : ");
        scanf_s("%f", &mass[a][1]);
    }

    b = 0;
    for (a = 0; a < n; ++a) {
        if (mass[a][0] < 0 && mass[a][1]>0) {
            c = sqrt(pow(mass[a][0], 2) + pow(mass[a][1], 2));
            if (c > k || a == 0) {
                k = c;
                b = a;
            }
        }
    }

    printf("A  %d :\n x: %f\n y: %f\n", b + 1, mass[b][0], mass[b][1]);

    return 0;
}