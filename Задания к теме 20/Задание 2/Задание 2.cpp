#include<stdio.h>
#include<locale.h>


int main()
{

    int mass[100], mass1[100],n,l,a,b,c,x,y;
    setlocale(LC_ALL, "Russian");
    printf("Введите n: ");
    scanf_s("%d", &n);
    printf("Введите l: ");
    scanf_s("%d", &l);

    for (a = 0; a < n; a++){
        printf("mass[%d] : ", a + 1);
        scanf_s("%d", &mass[a]);
    }

    b = -1;
    x = 1;
    y = n;

    for (a = 1; a < n; a++){
        if (mass[a - 1] != mass[a]){
            if (x > l) {
                mass1[++b] = 0;
                y -= x - 1;
            }
            else {
                for (c = 0; c < x; ++c) {
                    mass1[++b] = mass[a - 1];
                }
            }             x = 0;
        }         ++x;
    }       if (x > l) {
        mass1[++b] = 0;
        y -= x - 1;
    }
    else {
        for (c = 0; c < x; ++c) {
            mass1[++b] = mass[a - 1];
        }
    }

    for (a = 0; a < y; ++a) {
        mass[a] = mass1[a];
    }

    for (a = 0; a < y; ++a) {
        printf("mass[%d]= : %d\n", a + 1, mass[a]);
    } 

    return 0;

}