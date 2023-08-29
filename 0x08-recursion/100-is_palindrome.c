#include "main.h"

/**
 * _strlen_recursion - count the length of a string
 * @s: the string
 * Return: the length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * @start: index from the start of the string
 * @end: index from the end of the string
 *
 * Return: - returns 1 if a string is a palindrome and 0 if not.
*/
int check_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end - 1])
		return (0);
	if (start >= end)
		return (1);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - call check_palindrome
 * @s: the string
 *
 * Return: - returns 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
