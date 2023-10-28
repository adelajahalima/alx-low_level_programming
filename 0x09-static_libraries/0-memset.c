#include "main.h"

/**
 * _memset - Program that fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the expected value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)


{


	int d;


	for (d = 0; n > 0; d++)
	{
		s[d] = b;
		n--;
	}


	return (s);
}
