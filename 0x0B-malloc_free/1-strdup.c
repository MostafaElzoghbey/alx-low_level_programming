#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given as parameter
 * @str: string
 *
 * Return: pointer to the copied string in (Success), NULL in (Error)
*/
char *_strdup(char *str)
{
	char *cop;
	unsigned int len1, len2;

	len1 = 0;
	len2 = 0;

	if (str == NULL)
		return (NULL);

	while (str[len1])
		len1++;

	cop = malloc(sizeof(char) * (len1 + 1));

	if (cop == NULL)
		return (NULL);

	while (str[len2])
	{
		cop[len2] = str[len2];
		len2++;
	}

	return (cop);
}
