#include <stdio.h>
/**
* main - Main Funtion
* @argc: integer
* @argv: array of strings
* Return: Always Success
*/
int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
return (0);
}
