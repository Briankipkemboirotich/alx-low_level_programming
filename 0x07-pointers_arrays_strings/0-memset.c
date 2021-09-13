#include "main.h"

/**
 * _memset - fills memory with constant byte
 *@s: Starting address
 *@b: value
 *@n: number of bytes
 *Return: new value for n 
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
