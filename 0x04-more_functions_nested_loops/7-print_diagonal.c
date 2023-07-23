#include "main.h"

/**
 * print_diagonal - do something
 * @n: int
 * Return: thing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
