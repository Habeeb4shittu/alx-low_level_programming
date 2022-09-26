#include "main.h"
/**
 * _strchr - find the character
 * @s: string
 * @c: character
 * Return: c
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return ('\0');
		}
	}
	return ('\0');
}
