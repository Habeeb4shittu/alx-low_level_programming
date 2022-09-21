#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *_strcat - concatenates two strings
* @dest: first string
* @src: second string
* Return: Always success
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
