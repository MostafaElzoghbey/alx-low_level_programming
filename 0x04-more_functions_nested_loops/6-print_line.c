#include <stdio.h>

/**
 * print_line - do something
 * Return: something
 */
void print_line(int n)
{
	int i;

	for (i = 1; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
