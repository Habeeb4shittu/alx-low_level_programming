#include <string.h>
#include <stdio.h>
#include "main.h"
/**
* *_strncpy - copy strings
* @dest: first string
* @src: second string
* @n: length
* Return: Always Success
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
