#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable 'n'
 *              and prints the last digit of that number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = n % 10; /* Get the last digit of n */
printf("Last digit of %d is %d", n, lastDigit);
if (lastDigit > 5)
printf(" and is greater than 5\n");
else if (lastDigit == 0)
printf(" and is 0\n");
else
printf(" and is less than 6 and not 0\n");
return (0);
}
