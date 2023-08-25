#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatinate two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to total string or NULL in fail.
*/
char *str_concat(char *s1, char *s2)
{
	char *total;
	unsigned int len1, len2;

	len1 = 0;
	len2 = 0;

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	total = malloc(sizeof(char) * (len1 + len2 + 1));
	if (total == NULL)
		return (NULL);

	len1 = 0;
	len2 = 0;

	if (s1)
	{
		while (s1[len1])
		{
			total[len1] = s1[len1];
			len1++;
		}
	}
	if (s2)
	{
		while (s2[len2])
		{
			total[len1 + len2] = s2[len2];
			len2++;
		}
	}
	total[len1 + len2] = '\0';

	return (total);
}
