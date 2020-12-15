#include<stdio.h>
#include<locale.h> 
#include<math.h> 


int main()
{

    float mass[10][2],l,m;
    int n,a,b,c,x,y,z;
    setlocale(LC_ALL, "Russian");


    printf("Введите n: ");
    scanf_s("%i", &n);

    for (a = 0; a < n; ++a) {
        printf("mass[%d]:\n", a + 1);
        printf("Введите x : ");
        scanf_s("%f", &mass[a][0]);
        printf("Введите y : ");
        scanf_s("%f", &mass[a][1]);
    }

    m = 0;

    for (a = 0; a < n; ++a) {
        for (b = a + 1; b < n; ++b) {
            for (c = b + 1; c < n; ++c) {
                l = 0;
                l += sqrt(pow(mass[a][0] - mass[b][0], 2) + pow(mass[a][1] - mass[b][1], 2));
                l += sqrt(pow(mass[a][0] - mass[c][0], 2) + pow(mass[a][1] - mass[c][1], 2));
                l += sqrt(pow(mass[b][0] - mass[c][0], 2) + pow(mass[b][1] - mass[c][1], 2));
                if (l > m) {
                    x = a;
                    y = b;
                    z = c;
                    m = l;
                }
            }
        }
    }

    printf("Периметр: %f\n", m);
    printf("A %d :\n x: %f\n y: %f\n", x + 1, mass[x][0], mass[x][1]);
    printf("B %d :\n x: %f\n y: %f\n", y + 1, mass[y][0], mass[y][1]);
    printf("C %d :\n x: %f\n y: %f\n", z + 1, mass[z][0], mass[z][1]);

    return 0;


}