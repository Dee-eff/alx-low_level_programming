#include "main.h"

/**
 * _strcpy - copies a string to another location
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to the destination buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return dest;
}
