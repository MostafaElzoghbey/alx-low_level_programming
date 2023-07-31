#include "main.h"

/**
 * leet - do something
 * @str: pointer to char
 * Return: some thing
 */
char *leet(char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (str[len] == 'a' || str[len] == 'A')
		{
			str[len] = 'a' - ('a' - '4');
		}
		else if (str[len] == 'e' || str[len] == 'E')
		{
			str[len] = 'e' - ('e' - 'e');
		}
	}

	return (str);
}
