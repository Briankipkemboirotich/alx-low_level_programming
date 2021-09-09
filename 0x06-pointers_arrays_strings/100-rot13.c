#include "main.h"

/**
 * rot13 - encodes a string
 *Return: string
 */

char *rot13(char *)
{
	int i, j;
	char s;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] == b[j];
				break;
			}
		}
	}
	return (s);
}
