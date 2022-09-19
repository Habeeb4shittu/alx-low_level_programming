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
putchar("%p", *str);
}
