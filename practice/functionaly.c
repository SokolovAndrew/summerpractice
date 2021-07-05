#include "functionaly.h"
#include <stdio.h>

/* ����� ������ ������ */

int find_part(int number)
{
	int i;
	for (i = 0; i < MAX_PARTS; i++)
	{
		if (list[i].index == number) return i;
	}
	return -1;

}

/* �������� ������ */

void view()
{
	int i, number;
	printf("������� ����� ������:");
	scanf("%d", &number);
	i = find_part(number);
	if (i == -1) printf("������ � ����� ����������������� ������� �� �������!\n");
	else information(i);

}

/* ����� � �������� �������, � ������� ����� ������ 1500 ����, � ��������� ���� 15 �������� */

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
	if (count == 0) printf("������ � ����� ��������� ������ �� �������!\n");
}

/* �������� ���������� � ����� */

void information(int i)
{
	printf("����������������� �����: %d\n", list[i].index);
	printf("�������� ����� %s\n", list[i].name);
	printf("����� �����: %s\n", list[i].author);
	printf("����� �����: %0.0f\n", list[i].tirag);
	printf("��������� �����: %0.2f $\n", list[i].cost);
}
