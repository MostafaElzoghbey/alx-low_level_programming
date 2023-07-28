#include "main.h"

/**
 * _strlen - do something
 * @s: int or char
 * Return: some thing
 */
int _strlen(char *s)
{
	int len = 0;
	int i;
	char elm = *s;

	for (i = 0; *s != '\0'; i++)
	{
		elm++;
		len++;
	}
	return (len);
}
