#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to hold the values
 * @b: a constant byte to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the values
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
