#include "main.h"
#include<stdio.h>

/**
 *_puts - prints a string to stdout
 *@str: value to be evaluated
 *Return: not
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		l++;
	}
	_putchar('\n');
}
