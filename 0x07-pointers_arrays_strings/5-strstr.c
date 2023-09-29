#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the original string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, flag = 1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			flag = 0;
			if (haystack[i] != needle[j])
			{
				break;
			}
			else
			{
				i++;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			return (haystack + i - j);
		}
	}
	return ('\0');
}
