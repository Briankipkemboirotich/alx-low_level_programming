#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer for _
 */

int print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times --)
		_putchar('-');

	_putchar('\n');
}
