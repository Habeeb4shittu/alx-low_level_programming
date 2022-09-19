#include "main.h"
#include <stdio.h>
/**
* swap_int - A function that swaps the values of two integers
*
* @a: First integer
* @b: Second integer
*
* Return: Always (0)
*/
void swap_int(int *a, int *b)
{
int go;
go = *a;
*a = *b;
*b = go;
}
