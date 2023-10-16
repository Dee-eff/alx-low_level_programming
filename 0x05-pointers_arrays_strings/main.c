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

char *str;
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
print_rev(str);

char s[10] = "My School";
printf("%s\n", s);
rev_string(s);
printf("%s\n", s);

char *str;
str = "0123456789";
puts2(str);

char *str;
str = "0123456789";
puts_half(str);

int array[5];
array[0] = 98;
array[1] = 402;
array[2] = -198;
array[3] = 298;
array[4] = -1024;
print_array(array, 5);

char s1[98];
char *ptr;
ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
printf("%s", s1);
printf("%s", ptr);

int nb;
nb = _atoi("98");
printf("%d\n", nb);
nb = _atoi("-402");
printf("%d\n", nb);
nb = _atoi("          ------++++++-----+++++--98");
printf("%d\n", nb);
nb = _atoi("214748364");
printf("%d\n", nb);
nb = _atoi("0");
printf("%d\n", nb);
nb = _atoi("Suite 402");
printf("%d\n", nb);
nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
printf("%d\n", nb);
nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
printf("%d\n", nb);

return (0);
}
