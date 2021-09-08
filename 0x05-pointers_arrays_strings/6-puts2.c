#include "main.h"

/**
 * puts2 - prints characters of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 ==0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
