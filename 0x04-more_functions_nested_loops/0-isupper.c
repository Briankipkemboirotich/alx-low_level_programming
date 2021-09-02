#include "main.h"

/**
 * main - checks uppercase letters
 * @c: variable text
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
