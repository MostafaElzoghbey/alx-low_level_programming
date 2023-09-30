#include "main.h"


char *uniqe_str(char *s)
{
	char *uniqeStr = "";
	int *index, i, j, flag, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i + 1; s[j] != '\0'; j++)
		{
			flag = 0;
			if (s[i] == s[j])
				break;
			flag = 1;
		}
		if (flag == 1)
		{
			uniqeStr[k] = s[i];
			k++;
		}
	}
	return (uniqeStr);
}
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

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string
 * @accept: the chars to count if exit in s
 *
 * Return:  the number of bytes in the initial segment of s which
 * consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int j, count = 1;

	for (j = 0; accept[j] != '\0'; j++)
	{
		if (_strchr(s, accept[j]))
			count++;
	}
	return (count);
}
