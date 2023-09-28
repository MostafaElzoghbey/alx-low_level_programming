#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: the string
 * @c: the char to find in the str
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		if (s[i] == c)
			return (s + i);
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
}
