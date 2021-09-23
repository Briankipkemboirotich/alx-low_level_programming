#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocate memory using malloc
 *@b: size
 *Return: pointer to allocate dmemor or end with 98
 */

void *malloc_checked(unsigned int b);
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
