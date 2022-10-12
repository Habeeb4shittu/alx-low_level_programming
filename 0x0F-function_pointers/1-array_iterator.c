#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - write a function that execute a function
 * @array: input int array
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
