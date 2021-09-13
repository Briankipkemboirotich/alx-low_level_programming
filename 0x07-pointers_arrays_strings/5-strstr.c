#include "main.h"

/**
 * _strstr - locates a substring
 *@haystack: locate a substring
 *@needle: substring to locate
 *Return: pointer at the beginning of the substring
 * NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
