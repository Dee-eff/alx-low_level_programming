#include "main.h"
#include <stdio.h>
/**
 * print_sign - Checks forthe sign of a number.
 * @n: The number to be checked.
 *
 * Return: 1 if `n` is a positive, 0 if `n` is 0, -1 if otherwise
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0);
return (0);
}
else
{
_putchar('-');
}
return (-1);
}
