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
	char *cop = *s;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		s[i] = cop[j];
		j++;
	}
}
