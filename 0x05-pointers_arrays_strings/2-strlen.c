#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - returns the length of a string
*
* @s: string
* Return: Always success
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
s++;
length++;
}
return (length);
}
