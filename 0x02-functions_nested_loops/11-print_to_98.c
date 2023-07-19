#include "main.h"

/**
 * main - do something
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 98)
	{
		for (; n < 0; n++)
		{
			if (n <= -10)
			{
			_putchar('-');
			_putchar((-n / 10) + '0');
			_putchar((-n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar('-');
				_putchar(-n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		for (; n < 10; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		for (; n <= 98; n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 100; n--)
		{
			_putchar((n / 100) + '0');
			_putchar(((n - 100) / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		for (; n >= 98; n--)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
