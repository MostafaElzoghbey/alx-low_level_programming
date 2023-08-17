#include "variadic_functions.h"

/**
 * sum_them_all - do something
 * @n: int
 *
 * Return: something
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int res = 0;
	va_list l;

	va_start(l, n);

	for (j = 0; j < n; j++)
	{
		res += va_arg(l, int);
	}

	va_end(l);

	return (res);
}
