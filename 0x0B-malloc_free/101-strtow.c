#include <stdlib.h>
#include "main.h"

/**
 * word_counter - count the number of words
 * @str: pointer to sring
 *
 * Return: number of words
*/
int word_counter(char *str)
{
	int i, f = 1, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			f = 1;
		}
		else if (f == 1)
		{
			count++;
			f = 0;
		}
	}

	return (count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings in (Success) or NULL in (Error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_counter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}

	matrix[k] = NULL;

	return (matrix);
}
