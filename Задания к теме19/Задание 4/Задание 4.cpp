#include <stdio.h>
#include <locale.h>

int main()
{
    int  a, b, c, mass[100];
    setlocale(LC_ALL, "Rus");
    printf("Введите количество :\n");
    scanf_s("%d", &a);
    printf("Введите элементы массива :\n");
    for (b = 0; b < a; b++) {
        printf("mass[%d] = ", b);
        scanf_s("%d", &mass[b]);
    }

    c = 0;

    for (b = a - 1; b >= 0; b--) {
        if (mass[b] < 0) {
            a++;
            for (c = a; c > b; c--) {
                mass[c] = mass[c - 1];
            }
            mass[b + 1] = 0;
        }
    }

    for (b = 0; b < a; b++) {
        printf("%d: %d\n", b + 1, mass[b]);
    }


    return 0;
}