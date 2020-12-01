#include <stdio.h>
#include <locale.h>


int main()
{

	int day = 0, mont = 0;
	setlocale(LC_ALL, "Russian");
	printf("Введите месяц:\n");
	scanf_s("%d", &mont);
	printf("Введите день:\n");
	scanf_s("%d", &day);

	if (day == 1) {
		printf_s("Первое ");
	}
	else  if (day == 2) {
		printf_s("Второе  ");
	}
	if (day == 3) {
		printf_s("Третье  ");
	}
	else  if (day == 4) {
		printf_s("Четвертое  ");
	}
	if (day == 5) {
		printf_s("Пятое  ");
	}
	else  if (day == 6) {
		printf_s("Шестое  ");
	}
	if (day == 7) {
		printf_s("Седьмое  ");
	}
	else  if (day == 8) {
		printf_s("Восьмое  ");
	}
	if (day == 9) {
		printf_s("Девятое  ");
	}
	else  if (day == 10) {
		printf_s("Десятое  ");
	}
	if (day == 11) {
		printf_s("Одиннадцатое  ");
	}
	else  if (day == 12) {
		printf_s("Двенадцатое  ");
	}
	if (day == 13) {
		printf_s("Тринадцатое  ");
	}
	else  if (day == 14) {
		printf_s("Четарнадцатое  ");
	}
	if (day == 15) {
		printf_s("Пятнадцатое  ");
	}
	else  if (day == 16) {
		printf_s("Шестандцатое  ");
	}
	if (day == 17) {
		printf_s("Семнадцатое  ");
	}
	else  if (day == 18) {
		printf_s("Восемнадцатое  ");
	}
	if (day == 19) {
		printf_s("Девятнадцатое  ");
	}
	else  if (day == 20) {
		printf_s("Двадцатое  ");
	}
	if (day == 21) {
		printf_s("Двадцать Первое  ");
	}
	else  if (day == 22) {
		printf_s(" Двадцать Второе  ");
	}
	if (day == 23) {
		printf_s("Двадцать третье  ");
	}
	else  if (day == 24) {
		printf_s("Двадцать четвертое  ");
	}
	if (day == 25) {
		printf_s("Двадцать пятое  ");
	}
	else  if (day == 26) {
		printf_s("Двадцать шестое  ");
	}
	if (day == 27) {
		printf_s("Двадцать седьмое  ");
	}
	else  if (day == 28) {
		printf_s("Двадцать восьмое  ");
	}
	if (day == 29) {
		printf_s("Двадцать девятое  ");
	}
	else  if (day == 30) {
		printf_s("Тридцатое  ");
	}
	if (day == 31) {
		printf_s(" Тридцать первое  ");
	}
	if (mont == 1) {
		printf_s("января");
	}
	if (mont == 2) {
		printf_s("февраля");
	}
	if (mont == 3) {
		printf_s("марта");
	}
	if (mont == 4) {
		printf_s("апреля");
	}
	if (mont == 5) {
		printf_s("мая");
	}
	if (mont == 6) {
		printf_s("июня");
	}
	if (mont == 7) {
		printf_s("июля");
	}
	if (mont == 8) {
		printf_s("августа");
	}
	if (mont == 9) {
		printf_s("сентября");
	}
	if (mont == 10) {
		printf_s("октября");
	}
	if (mont == 11) {
		printf_s("ноября");
	}
	if (mont == 12) {
		printf_s("декабря");
	}

	return 0;

}