#include <stdio.h>
#include "main.h"
/**
 *puts2 - prints every other character of a string,starting with first letter
 *@str: string pointer
 * Return : always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
	}

}
