#include "main.h"
#include <Stdio.h>

/**
 *print_array - print n elements of an array of integers
 *@n: number of an array
 *@a: pointer
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf('\n');
}
