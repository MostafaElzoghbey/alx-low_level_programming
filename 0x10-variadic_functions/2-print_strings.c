#include "variadic_functions.h"

/**
 * print_strings - dosomething
 * @separator: string
 * @n: int
 *
 * Return: something
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *strng;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		strng = va_arg(list, char *);

		if (!strng)
		{
			strng = "(nil)";
		}
		if (!separator)
		{
			printf("%s", strng);
		}
		else if (separator && j == 0)
		{
			printf("%s", strng);
		}
		else
		{
			printf("%s%s", separator, strng);
		}
	}

	va_end(list);

	printf("\n");
}
