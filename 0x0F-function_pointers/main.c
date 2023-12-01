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

void print_elem(int elem)
{
    printf("%d\n", elem);
}

void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

int main(void)
{
    print_name("Bob", print_name_uppercase);
    print_name("Bob Dylan", print_name_uppercase);

    int array[5] = {0, 98, 402, 1024, 4096};
    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);

    return (0);
}

