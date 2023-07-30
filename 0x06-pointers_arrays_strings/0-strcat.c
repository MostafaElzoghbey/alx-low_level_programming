#include "main.h"

/**
 * _strcat - do something
 * @dest: pointer to char
 * @src: pointer to char
 * Return: some thing
 */
char *_strcat(char *dest, char *src)
{
	int len2 = 0;
	int lenTotal = 0;

	while (dest[lenTotal] != '\0')
	{
		lenTotal++;
	}
	while (src[len2] != '\0')
	{
		dest[lenTotal] = src[len2];
		len2++;
		lenTotal++;
	}
	dest[lenTotal] = '\0';

	return (dest);
}
