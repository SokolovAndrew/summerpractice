/*
файл:practice.c
Учебная практика
Автор: Соколов А.С.
Задание: Создать текстовый файл на 12 записей с информацией о книгах, посвященные программированию: автор, название книги, тираж, стоимость.
Функциональность: просмотр, поиск - вывести сведения о книгах, их количество и их общую стоимость, если книги посвящены программирования на языке С.
Дата создания: 10.06.2021
*/

// подключение заголовочных файлов стандартных библиотек языка С

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "functionaly.h"
int main()
{
	setlocale(LC_CTYPE, "rus");
	int command;
	char name_file[MAX];
	printf("Введите имя файла с базой данных (обязательно с типом расширения):");
	scanf("%s", &name_file);
	ReadTXTFile(name_file);
	printf("	Меню:\n1-Просмотр записи\n2-Поиск записи\n0-Закрыть программу\n");
	for (;;)
	{
		printf("\nВведите команду:");
		scanf("%d", &command);
		if (command > 2 || command < 0) printf("Такой команды не существует!\n");
		else
		{
			switch (command)
			{
			case 1: view(); break;
			case 2: search();  break;
			case 0: return 0; break;
			}
		}
	}
}
