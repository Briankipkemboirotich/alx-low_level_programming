#include <stdio.h>

/**
 * main - prints all arguments received
 *@argc: argument count
 *@argv: array of pointers
 *Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
