#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string to use
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int cign = 1, k = 0;
	unsigned int rez = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			cign *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		rez = (rez * 10) + (s[k] - '0');
			k++;
	}
	rez *= cign;
	return (rez);
}
