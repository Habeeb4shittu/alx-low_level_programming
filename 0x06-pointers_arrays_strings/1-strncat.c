#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* *_strncat - concatenates two strings
* @dest: first string
* @src: second string
* @n: length
* Return: Always Success
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
