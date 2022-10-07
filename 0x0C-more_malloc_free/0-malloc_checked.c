#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - write a function that allocates malloc
 * @b: param
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
