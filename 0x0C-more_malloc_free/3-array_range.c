#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: param 1
 * @max: param 2
 * Return: value
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
