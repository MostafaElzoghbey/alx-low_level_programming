#include "main.h"

/**
 * _strlen - do something
 * @s: int or char
 * Return: some thing
 */
int _strlen(char *s)
{
	char elm = *s;
	int len = 0;

	while (*s != '\0')
	{
		*s++;
		len++;
	}
	return (len);
}
