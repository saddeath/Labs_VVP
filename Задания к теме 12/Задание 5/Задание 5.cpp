#include <stdio.h>
#include <locale.h>


int main()
{

    int x;
    setlocale(LC_ALL, "Rus");
    printf("Введите год:");
    scanf_s("%d", &x);

    switch ((x) % 10) {
    case 0:
    case 1:
        printf("бело");
        break;
    case 2:
    case 3:
        printf("черно");
        break;
    case 4:
    case 5:
        printf("зелёно");
        break;
    case 6:
    case 7:
        printf("красно");
        break;
    case 8:
    case 9:
        printf("жёлто");
        break;
    }
    switch (x % 12) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        printf("й ");
        break;
    case 6:
    case 7:
    case 8:
        printf("го ");
        break;
    }

    switch ((x + 8) % 12) {
    case 0:
        printf("крысы\n");
        break;
    case 1:
        printf("коровы\n");
        break;
    case 2:
        printf("тигра\n");
        break;
    case 3:
        printf("зайца\n");
        break;
    case 4:
        printf("дракона\n");
        break;
    case 5:
        printf("змеи\n");
        break;
    case 6:
        printf("лошади\n");
        break;
    case 7:
        printf("овцы\n");
        break;
    case 8:
        printf("обезьяны\n");
        break;
    case 9:
        printf("курицы\n");
        break;
    case 10:
        printf("собаки\n");
        break;
    case 11:
        printf("свиньи\n");
        break;
    }


    return 0;
}