#include "main.h"
#include <stdio.h>
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));

char c;
c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));

printf("%d\n", mul(98, 1024));
printf("%d\n", mul(-402, 4096));

print_numbers();

return (0);
}
