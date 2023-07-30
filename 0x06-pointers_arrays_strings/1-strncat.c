#include "main.h"

/**
 * _strncat - do something
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: something
 */
char *_strncat(char *dest, char *src, int n)
{
	int len2 = 0;
	int lenTotal = 0;

	while (dest[lenTotal] != '\0')
	{
		lenTotal++;
	}
	while (src[len2] != '\0' && len2 < n)
	{
		dest[lenTotal] = src[len2];
		len2++;
		lenTotal++;
	}
	dest[lenTotal] = '\0';

	return (dest);
}
