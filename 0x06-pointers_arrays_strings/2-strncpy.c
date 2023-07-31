#include "main.h"

/**
 * _strncpy - do something
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: something
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '*';
		len++;
	}

	return (dest);
}
