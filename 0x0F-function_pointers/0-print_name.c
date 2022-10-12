#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - write a function that prints a name
 * @name: input name
 * @f: function pointer
 *
 * Return: no result
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
