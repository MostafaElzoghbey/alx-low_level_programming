#include "main.h"

/**
 * rev_string - do something
 * @s: int or char
 * Return: some thing
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int len = 0;
	char cop[4000];

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		cop[i] = s[i];
	}
	for (i = len - 1; i >= 0; i--)
	{
		s[j] = cop[i];
		j++;
	}
}
