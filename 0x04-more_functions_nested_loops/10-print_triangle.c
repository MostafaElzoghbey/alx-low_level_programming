#include "main.h"

/**
 * print_triangle - do something
 * @size: int
 * Return: thing
 */
void print_triangle(int size)
{
		int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j < i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar('\n');
	}
}
