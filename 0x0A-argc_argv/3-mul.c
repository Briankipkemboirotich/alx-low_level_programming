#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 *@argc: argument count
 *@argv: array of pointers
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
