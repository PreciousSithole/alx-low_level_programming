#include "main.h"
/**
 * reverse_array - reverse contant of an array of integers
 * @a: array
 * @n: The number of array
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n]
		a[n] = y;
	}
}
