#include "main.h"
#include <string.h>

/**
 * _memcpy - a function that copies memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
