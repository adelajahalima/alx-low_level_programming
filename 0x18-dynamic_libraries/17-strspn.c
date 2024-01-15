#include "main.h"

/**
 * _strspn - Program entry point
 * @s: first input
 * @accept: second input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int o = 0;
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
			{
				o++;
				break;
			}
			else if (accept[v + 1] == '\0')
				return (o);
		}
		s++;
	}
		return (o);
}
