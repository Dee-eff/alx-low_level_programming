#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the first character in the string, or NULL otherwise
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
