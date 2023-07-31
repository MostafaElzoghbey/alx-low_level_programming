#include "main.h"

/**
 * _strcmp - do something
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: some thing
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 = '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
