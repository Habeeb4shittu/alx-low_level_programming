#include "main.h"
/**
 * _print_rev_recursion - a function returning the length of a string
 * @s: parameter 1
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
