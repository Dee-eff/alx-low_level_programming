#include "main.h"

/**
* _strspn - calculates the length of a prefix substring
* @s: the string to be analyzed
* @accept: the string containing characters to match
*
* Return: the number of characters in the initial segment that match 'accept'
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;
while (*s)
{
match = 0;
while (*accept)
{
if (*s == *accept)
{
count++;
match = 1;
break;
}
accept++;
}
if (match == 0)
{
break;
}
s++;
accept -= count;
}
return (count);
}
