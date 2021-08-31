#include "main.h"

/**
 * print _alphabet - Print in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
        char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
