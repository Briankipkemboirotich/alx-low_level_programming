#include "main.h"

/**
 * print_last_digit - print last digit number
 * @: integer argument
 * Return: last digit number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));

	return (n % 10);
}
