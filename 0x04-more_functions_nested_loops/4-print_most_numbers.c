#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 followed by a new number
 *
 * Return (0) ALWAYS
 */
void print_most_numbers(void)
{
int digit;
for (digit = 0; digit <= 9; digit ++)
{
if (digit !=2 && digit != 4)
{
_putchar(digit + '0');
}
}
_putchar('\n');
}
