#include "main.h"
#include <stdio.h>

int main(void)
{
int n;

n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);

int a;
    int b;

a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);

char *str;
int len;
str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);

char *str;
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
_puts(str);

return (0);
}
