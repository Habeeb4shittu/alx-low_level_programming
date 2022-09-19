#include "main.h"
#include <unistd.h>
/**
* _puts - prints a string, followed by a new line
*
* @str: string
* Return: always success
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
++str;
}
putchar('\n');
}
