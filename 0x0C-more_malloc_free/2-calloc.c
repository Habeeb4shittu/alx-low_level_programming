#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory to an array
 * @nmemb: param 1
 * @size: param 2
 * Return: memoty location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, a;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = (nmemb * size);
	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		array[i] = 0;
	return (array);
}
