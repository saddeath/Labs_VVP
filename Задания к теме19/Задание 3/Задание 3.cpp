#include <stdio.h>
#include <locale.h>

int main()
{
	int  a, b, c, d, e, e1, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 0; b < a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

    c = 0;
    d = 0;
    for (b = 0; b < a; ++b) {
        if (mass[c] > mass[b]) {
            c = b;
        }
        if (mass[d] < mass[b]) {
            d = b;
        }
    }
    if (d > c) {
        d++;
    }

    a++;
    for (b = a - 1; b > c; --b) {
        mass[b] = mass[b - 1];
    }
    mass[c] = 0;

    a++;
    for (b = a - 1; b > d + 1; --b) {
        mass[b] = mass[b - 1];
    }
    mass[d + 1] = 0;

    for (b = 0; b < a; b++) {
        printf("%d: %d\n", b + 1, mass[b]);
    }


	return 0;
}