#include "main.h"

/**
 * _strlen - to return the length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int longii = 0;

	while (*s != '\0')
	{
		longii++;
		s++;
	}
	return (longii);
}
