#include "main.h"

/**
 *reverse_array - reverse content of array
 *@a: array
 *@n: number of elements
 *Return: void
 */

void reverse_array(int *2, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
