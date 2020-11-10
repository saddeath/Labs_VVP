#include <stdio.h>
#include <locale.h>

int main()
{
	int A, B, x;
	setlocale(LC_ALL, "Rus");
	printf("Ввеите значение A:\n");
	scanf_s("%d", &A);
	printf("Ввеите значение B:\n");
	scanf_s("%d", &B);
	if (A > B) {
		x = A % B;
	}
	printf("Остаток от длины А: %d\n", x);

	return 0;

}