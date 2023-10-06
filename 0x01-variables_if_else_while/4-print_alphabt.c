#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z' + 'Z')
{
putchar(letter);
if (letter == 'z')
letter = 'A' - 1;
letter++;
}
putchar('\n');
return (0);
}
