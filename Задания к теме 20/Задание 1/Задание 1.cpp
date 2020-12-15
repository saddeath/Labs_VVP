#include <stdio.h>
#include <locale.h>


int main()
{

	int n, mass[100], mass1[100], mass2[100], a=0,b=0;
	setlocale(LC_ALL, "Russian");
    printf("Введите значение n:");
    scanf_s("%d", &n);

    for (a = 0; a < n; a++){
        printf("mass[%d] : ", a + 1);
        scanf_s("%d", &mass[a]);
    }

    mass1[b] = 1;
    mass2[b] = mass[b];
    for (a = 1; a < n; a++){
        if (mass[a - 1] == mass[a]){
            ++mass1[b];
        }
        else{
            ++b;
            mass1[b] = 1;
            mass2[b] = mass[a];
        }
    }

    for (a = 0; a <= b; a++) {
        printf("mass1[a]=%d   mass2[a]%d\n", mass1[a], mass2[a]);
    }

    return 0;

}