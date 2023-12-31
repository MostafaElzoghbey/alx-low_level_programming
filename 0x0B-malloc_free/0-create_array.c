#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to put it in the array
 *
 * Return: pointer to the array in (Success), NULL in (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	p[i] = '\0';

	return (p);
}
