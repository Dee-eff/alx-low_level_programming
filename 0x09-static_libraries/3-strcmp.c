#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: an integer less than, equal to, or greater than zero, depending on the comparison
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return *s1 - *s2;
}
