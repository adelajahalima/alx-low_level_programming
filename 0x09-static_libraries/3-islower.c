#include "main.h"

/**
 * _islower - checks if letters provided are in lowercase
 * @c: the char to check
 *
 * Return: 0 if c is lowercase, or 1 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
