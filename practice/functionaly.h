#define _CRT_SECURE_NO_WARNINGS
#ifndef read_H
#define read_H
#define MAX 200
#define MAX_PARTS 12
struct item
{
	int index;
	char name[MAX];
	char author[MAX];
	float tirag;
	float cost;
} list[MAX_PARTS];
void ReadTXTFile(char name[]);
void view();
int find_part(int number);
void search();
void information(int i);
#endif  
#pragma once
