#include "main.h"

/**
 * _isalpha - Prog that checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
