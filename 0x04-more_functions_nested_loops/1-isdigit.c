#include "main.h"

/**
 * _isdigit - checks if a number is between 0 and 9
 * @c:The number to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 *
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
