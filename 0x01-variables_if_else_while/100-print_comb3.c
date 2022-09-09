#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nums;
int reals;
for (nums = 0; nums <= 9; nums++)
for (reals = nums + 1; reals <= 9; reals++)
putchar(nums + '0');
putchar(reals + '0');
if (nums < 8)
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
