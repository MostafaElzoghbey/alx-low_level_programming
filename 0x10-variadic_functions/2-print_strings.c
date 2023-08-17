#include "variadic_functions.h"

/**
 * print_strings - dosomething
 * @separator: string
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		if (!separator)
		{
			printf("%s", va_arg(list, char *));
		}
		else if (separator && j == 0)
		{
			printf("%s", va_arg(list, char *));
		}
		else
		{
			printf("%s%s", separator, va_arg(list, char *));
		}
	}

	va_end(list);

	printf("\n");
}
