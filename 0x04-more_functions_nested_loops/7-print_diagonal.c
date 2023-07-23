#include "main.h"

/**
 * maprint_diagonalin - do something
 * @n: int
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar(' ');
	}
	_putchar('\n');
}
