#include "function_pointers.h"
#include <stdio.h>
void print_name_uppercase(char *name)
{
unsigned int i;
printf("Hello, my uppercase name is ");
i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
putchar(name[i]);
}
i++;
}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_name("Bob", print_name_uppercase);
print_name("Bob Dylan", print_name_uppercase);
printf("\n");
return (0);
}
