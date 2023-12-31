#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, num, result;
	int cons[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("%d\n", 0);

		return (0);
	}

	for (i = 0; i < 5  && num > 0; i++)
	{
		while (num >= cons[i])
		{
			result++;
			num -= cons[i];
		}
	}
	printf("%d\n", result);

	return (0);
}
