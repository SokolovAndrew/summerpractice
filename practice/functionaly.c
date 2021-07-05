#include "functionaly.h"
#include <stdio.h>

/* Поиск номера записи */

int find_part(int number)
{
	int i;
	for (i = 0; i < MAX_PARTS; i++)
	{
		if (list[i].index == number) return i;
	}
	return -1;

}

/* Просмотр записи */

void view()
{
	int i, number;
	printf("Введите номер записи:");
	scanf("%d", &number);
	i = find_part(number);
	if (i == -1) printf("Запись с таким идентификационным номером не найдена!\n");
	else information(i);

}

/* Поиск и просмотр записей, у которых тираж больше 1500 книг, и стоимость выше 15 долларов */

void search()
{
	int count = 0, i;
	for (i = 0; i < MAX_PARTS; i++)
	{
		if (list[i].tirag > 10000 && list[i].cost > 15)
		{
			information(i);
			printf("\n");
			count++;
		}
	}
	if (count == 0) printf("Запись с таким критерием поиска не найдена!\n");
}

/* Просмотр информации о книге */

void information(int i)
{
	printf("Идентификационный номер: %d\n", list[i].index);
	printf("Название книги %s\n", list[i].name);
	printf("Автор книги: %s\n", list[i].author);
	printf("Тираж книги: %0.0f\n", list[i].tirag);
	printf("Стоимость книги: %0.2f $\n", list[i].cost);
}
