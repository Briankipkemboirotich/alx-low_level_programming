#include "3-calc.h"

/**
 * op_add - adds two ints
 *@a: number 1
 *@b: number 2
 *Return: sum of the two numbers
 */

int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - subtract two ints
 *@a: number 1
 *@b: number 2
 *Return: difference of two numbers
 */

int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_mul - multiplies two ints
 *@a: number 1
 *@b: number 2
 *Return: results of multiplication
 */

int op_mul(int a, int b)
{
	return(a * b);
}

/**
 * op_div - division of two ints
 *@a: number 1
 *@b: number 2
 *Return: results
 */

int op_div(int a, int b)
{
	if (b == 0)
		return(-1);
	return(a / b);
}

/**
 * op_mod - mod of two ints
 *@a: number 1
 *@b: number 2
 *Return: results of mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
		return(-1);
	return (a % b);
}
