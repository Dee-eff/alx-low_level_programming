#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Return 0 ALWAYS
 */
void print_numbers(void)
{
char digit = '0';
while (digit <= '9')
{
_putchar(digit);
digit++;
}
_putchar('\n');
}
