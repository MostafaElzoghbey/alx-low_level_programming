#include "main.h"

/**
 * rot13 - do something
 * @str: pointer to char
 * Return: some thing
 */
char *rot13(char *str)
{
	int i;
	int len;
	char *text = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (len = 0; str[len] != '\0'; len++)
	{
		for (i = 0; text[i] != '\0'; i++)
		{
			if (str[len] == text[i])
			{
				str[len] = code[i];
				break;
			}
		}
	}

	return (str);
}
