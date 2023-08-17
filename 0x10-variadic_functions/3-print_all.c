#include "variadic_functions.h"

/**
 * print_all - do something
 * @format: conist pointer to conist string
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *strng, *sep = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					strng = va_arg(list, char *);
					if (!strng)
						strng = "(nil)";
					printf("%s%s", sep, strng);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}
	va_end(list);
	printf("\n");
}
