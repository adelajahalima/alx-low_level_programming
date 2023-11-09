#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: function pointer
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
