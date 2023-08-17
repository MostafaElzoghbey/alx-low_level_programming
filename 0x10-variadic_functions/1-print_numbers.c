#include "variadic_functions.h"

/**
 * print_numbers - dosomething
 * @separator: string
 * @n: int
 * Return: something
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		if (!separator)
		{
			printf("%d", va_arg(list, int));
		}
		else if (separator && j == 0)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(list, int));
		}
	}

	va_end(list);

	printf("\n");
}
