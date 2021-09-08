#include "main.h"

/**
 *_puts - prints a string to stdout
 *@str: value to be evaluated
 *Return: not
 */

void _puts(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		l++;
		str++;
	}
	_putchar('\n');
}
