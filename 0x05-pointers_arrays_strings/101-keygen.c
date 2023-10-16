#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>

/**
 * generatePassword - Generates a random password of the specified length.
 * @length: The length of the password.
 */

void generatePassword(int length)
{
const char charset[] = "a..zA..Z0..9";
int charset_length = sizeof(charset) - 1;
char password[length + 1];
srand(time(NULL));
for (int i = 0; i < length; i++)
{
int random_index = rand() % charset_length;
password[i] = charset[random_index];
}
password[length] = '\0';
printf("%s\n", password);
}

/**
 * main - Entry point for the password generator.
 * Return: Always 0.
 */
int main(void)
{
int password_length = 12; /* Adjust the length as needed*/
generatePassword(password_length);
return (0);
}
