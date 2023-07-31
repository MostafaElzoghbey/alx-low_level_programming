#include "main.h"

/**
 * leet - do something
 * @str: pointer to char
 * Return: some thing
 */
char *leet(char *str)
{
	int i;
	int len;
	char *text = "aAeEoOtTlL";
	char *code = "4433007711";

	for (len = 0; str[len] != '\0'; len++)
	{
		for (i = 0; text[i] != '\0'; i++)
		{
			if (str[len] == text[i])
			{
				str[len] = code[i];
			}
		}
	}

	return (str);
}
