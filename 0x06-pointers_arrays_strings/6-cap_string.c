#include "main.h"

/**
 * cap_string - do something
 * @str: pointer to char
 * Return: some thing
 */
char *cap_string(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (!(str[len - 1] >= 'a' && str[len - 1] <= 'z'))
		{
			if (str[len] >= 'a' && str[len] <= 'z')
			{
				str[len] = str[len] - 32;
			}
		}	
		len++;
	}

	return (str);
}
