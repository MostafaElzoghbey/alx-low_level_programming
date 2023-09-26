#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to hold the values
 * @src: pointer to values to copy form
 * @n: number of bytes to copy b
 *
 * Return: pointer to the values
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
