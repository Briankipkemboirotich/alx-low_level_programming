#include "function_pointers"
#include"stdlib.h"
#include <stdio.h>

/**
 * print_name - prints a name
 *@name: pointer
 *@f: pointer to function
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
