#include<stdio.h>
#include<string.h>
#include"task1.h"
void lineSort(char* str[], int size)
{
	char *buf = NULL;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (strlen(str[i])>strlen(str[j]))
			{
				buf = str[i];
				str[i] = str[j];
				str[j] = buf;
			}
}
void printLines(const char* str[], int size)
{
	for (int i = 0; i < size; i++)
		puts(str[i]);
}