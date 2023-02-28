#include "main.h"
/**
 * _strlen - returns the legnth of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length;
	int position;

	length = 0;
	position = 0;

	while (s[position] != '\0')
	{
		length++;
		position++;
	}
	return (length);
}

