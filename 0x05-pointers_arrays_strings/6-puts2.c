#include "main.h"

/**
 * puts2 - prints characters of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i +=1)
		_putchar(str[1]);

	_putchar('\n');
}
