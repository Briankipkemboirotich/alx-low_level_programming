#include "main.h"
#include <stdio.h>

/**
 * print - print numbers n-98
 *@n: integer argument
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	
	while (n > 8)
	{
		printf("%d, ", n);
		n--;
	}
	
	if (n == 8)
	{
		printf("%d", n);
	}

	printf("\n");
}
		
