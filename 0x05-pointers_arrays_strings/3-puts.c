#include "main.h"

/**
 * _puts - do something
 * @str: int or char
 * Return: some thing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
