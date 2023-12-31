#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *start = haystack;
char *sub = needle;
while (*haystack && *sub && *haystack == *sub)
{
haystack++;
sub++;
}
if (!*sub)
{
return (start);
}
haystack = start + 1;
}
return (NULL);
}
