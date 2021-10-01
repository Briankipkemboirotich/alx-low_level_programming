#include <stdlib.h>
#include "3-calc.h"

/**
 *get_op_func - selects correct function to perform operation 
 *@s: operation given
 *Return: pointer to correct operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return(ops[i].f);
		i++;
	}
	return(NULL);
}
