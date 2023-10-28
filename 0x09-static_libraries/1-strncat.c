#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes from src to append to dest
 *
 * Return: a pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++);
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return dest;
}
