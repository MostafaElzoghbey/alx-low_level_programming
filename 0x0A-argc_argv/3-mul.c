#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		if (s[i] == '-')
		{
			d++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}

	return (n);
}

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
