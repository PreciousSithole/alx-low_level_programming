#include "main.h"
/**
 * _strcat - Concatenates two strings
 * apends the src string to dest string and overwrite end of dest
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int d;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[x] = src[d];
		x++;
		d++;
	}

	dest[x] = '\0';
	return (dest);
}

