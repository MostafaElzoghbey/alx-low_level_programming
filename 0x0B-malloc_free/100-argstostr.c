#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all arguments of the program to one string
  * @ac: argument count
  * @av: pointer to array of size ac
  * Return: Pointer to new total string or NULL
  */
char *argstostr(int ac, char **av)
{
	int height, width, totalLen = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	height = 0;
	while (height < ac)
	{
		width = 0;
		while (av[height][width])
		{
			totalLen++;
			width++;
		}
		totalLen++;
		height++;
	}
	str = malloc((sizeof(char) * totalLen) + 1);
	if (str == NULL)
		return (NULL);

	totalLen = 0;
	height = 0;
	while (height < ac)
	{
		width = 0;
		while (av[height][width])
		{
			str[totalLen] = av[height][width];
			totalLen++;
			width++;
		}
		str[totalLen] = '\n';
		totalLen++;
		height++;
	}
	str[totalLen] = '\0';
	return (str);
}
