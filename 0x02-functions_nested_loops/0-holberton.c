#include "main.h"

/**
 * main - Print Holberton
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[10] = "Holberton";
	int i;

	for(i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
