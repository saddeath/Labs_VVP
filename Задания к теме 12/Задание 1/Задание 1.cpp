#include <stdio.h>
#include <locale.h>


int main(void)
{

    int x;
    char y;
    setlocale(LC_ALL, "Rus");
    printf("Введите направление:");
    scanf_s("%c", &y);
    printf("Введите команду:");
    scanf_s("%d", &x);

    switch (y) {
    case 'S':
        switch (x) {
        case 1:
            y = 'Z';
            break;
        case 0:
            y = 'S';
            break;
        case -1:
            y = 'V';
            break;
        }
        break;
    case 'V':
        switch (x) {
        case 1:
            y = 'S';
            break;
        case 0:
            y = 'V';
            break;
        case -1:
            y = 'U';
            break;
        }
    case 'U':
        switch (x) {
        case 1:
            y = 'V';
            break;
        case 0:
            y = 'U';
            break;
        case -1:
            y = 'Z';
            break;
        }
        break;
    case 'Z':
        switch (x) {
        case 1:
            y = 'U';
            break;
        case 0:
            y = 'Z';
            break;
        case -1:
            y = 'S';
            break;
        }
    }

    printf("%c\n", y);


    return 0;
}