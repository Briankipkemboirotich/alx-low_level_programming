#include "main.h"

/**
 * _memcpy - copies memory area
 *@dest: memory to be stored
 *@src: memory to be copied
 *@n: number of bytes
 *Return: copied memory with n changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
