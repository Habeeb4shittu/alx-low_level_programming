#include "main.h"
#include <string.h>
/**
* *_memset - the function itself
* @s: char
* @b: char
* @n: int
* Return: Always Success
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
