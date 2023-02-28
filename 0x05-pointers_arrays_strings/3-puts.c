#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{

	int p;

	p = 0;

	while (str[p] != '\0')
	{
		printf("%c", str[p]);
		p++;
	}
	printf("\n");
}

