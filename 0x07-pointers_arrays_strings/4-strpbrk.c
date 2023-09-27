#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: string to search for its chars
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, index = 1000000;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j] && i < index)
			{
				index = i;
			}
		}
	}
	if (index != 1000000)
		return (s + index);
	return ('\0');
}
