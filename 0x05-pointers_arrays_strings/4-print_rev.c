#include "main.h"
#include <stdio.h>
/**
* print_rev - print string in a reverse mode
* @s: string
* Return: Always Success
*/
void print_rev(char *s)
{
int init;
for (init = 0; s[init] != '\0'; ++init)
{
}
for (--init; init >= 0; --init)
{
putchar(s[init]);
}
putchar('\n');
}
