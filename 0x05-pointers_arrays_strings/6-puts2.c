#include <stdio.h>
#include "main.h"
/**
 *puts2 - prints every other character of a string,starting with first letter
 *@str: string pointer
 * Return : always 0
 */
void puts2(char *str)
{
	int length;
	int halfstring;
	int x;

	length = 0;
	x = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	halfstring = length / 2;

	while (x <= halfstring)
	{
		printf("%c", str[x]);
		x++;
	}
}
