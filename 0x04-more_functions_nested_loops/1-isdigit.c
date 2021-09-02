#include "main.h"

/**
 * _isdigit - check if its a digit
 * @c: Character digit
 * Return: 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
