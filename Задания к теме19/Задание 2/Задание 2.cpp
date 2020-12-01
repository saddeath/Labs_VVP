#include <stdio.h>
#include <locale.h>

int main()
{
	int  a, b, c,d,e,e1, mass[100];
	setlocale(LC_ALL, "Rus");
	printf("Введите количество :\n");
	scanf_s("%d", &a);
	printf("Введите элементы массива :\n");
	for (b = 1; b <= a; b++) {
		printf("mass[%d] = ", b);
		scanf_s("%d", &mass[b]);
	}

	for (b = 1; b <= a; b++){
		c = 0;
		for (d = 1; d <= a; d++){
			if (mass[b] == mass[d]){
				c++;
			}
		}
		if (c == 2){
			e = b - 1;
			e1 = mass[b];
			for (d = b; d <= a; d++)
				if (mass[d] != e1){
					e++;
					mass[e] = mass[d];
				}
			a = e;
			b--;
		}
	}

	for (b = 1; b <= a; b++)
		printf(" %d\n", mass[b]);


	return 0;
}