#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function given as parameter
 *@array: pointer to an array
 *@size: number of elements n array
 *@action: pointer to function
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
