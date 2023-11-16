#include "main.h"
int check_palindrome(char *s, int length);
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
return check_palindrome(s, length);
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @length: The length of the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int length)
{
if (length <= 1)
return 1;
i (s[0] == s[length - 1])
return check_palindrome(s + 1, length - 2);
return 0;
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if(*s == '\0')
return 0;
return 1 + _strlen_recursion(s + 1);
}

