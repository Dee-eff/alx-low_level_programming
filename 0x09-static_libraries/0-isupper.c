#include "main.h"
/**
 * _isupper - checks if a character is an uppercase letter
 * @c: the character to be checked
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
