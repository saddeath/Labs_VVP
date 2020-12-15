#include<stdio.h>
#include<locale.h>


int main()
{

    int mass[100], mass1[100],n,k,a,b,x,y,z,w;
    setlocale(LC_ALL, "Russian");
    printf("Ведите значение n: ");
    scanf_s("%d", &n);
    printf("Введите значение k: ");
    scanf_s("%d", &k);

    for (a = 0; a < n; ++a){
        printf("mass[%d] : ", a + 1);
        scanf_s("%d", &mass[a]);
    }

    x = 1;
    y = 1;
    z = (k == 1 ? 1 : 0);

    for (a = 1; a < n; ++a) {
        if (mass[a - 1] != mass[a]){
            x++;
            if (x == k) {
                y = a;
            }
            w = a;
        }
        if (x == k) {
            z++;
        }
    }

    b = -1;
    for (a = 0; a < y; ++a) {
        mass1[++b] = mass[a];
    }

    for (a = w; a < n; ++a) {
        mass1[++b] = mass[a];
    }

    for (a = y + z; a < w; ++a) {
        mass1[++b] = mass[a];
    }

    for (a = y; a < y + z; ++a) {
        mass1[++b] = mass[a];
    }

    for (a = 0; a < n; ++a) {
        mass[a] = mass1[a];
    }

    for (a = 0; a < n; ++a) {
        printf("mass[%d] : %d\n", a + 1, mass[a]);
    }

    return 0;


}