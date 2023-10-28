#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *q = haystack;
		char *t = needle;

		while (*q == *t && *t != '\0')
		{
			q++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (0);
}
