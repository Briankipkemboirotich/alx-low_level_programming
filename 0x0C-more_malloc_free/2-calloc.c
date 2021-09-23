#include "main.h"
#include <stdlib.h>

/**
 * * calloc - allocates memory using malloc
 *@nmemb: n
 *@size: size
 *Return: NULL if size 0, elseNULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	*(memory + i) = 0;
	return ((void *)memory);
}
	
