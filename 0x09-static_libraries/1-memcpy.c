#include "main.h"

/**
 *_memcpy - a function that copies specified memory area
 *@dest: memory where it is stored
 *@src: memory where it is copied from
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v;
	int t = n;

	for (v = 0; v < t; v++)
	{
		dest[v] = src[v];
		n--;
	}
	return (dest);
}
