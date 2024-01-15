#include "main.h"

/**
 * _strpbrk - Prog entry point
 * @s: first input
 * @accept: second input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int w;

	while (*s)
	{

		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
				return (s);
		}
		s++;
	}

	return ('\0');
}
