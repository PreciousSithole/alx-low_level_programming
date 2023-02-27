#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @str: The string to get the length
 * Return: length
 */
size_t _strlen(constant char *str)
{
	size_t length = 0

	while (*str++)
	length++;
	return (length);
}

