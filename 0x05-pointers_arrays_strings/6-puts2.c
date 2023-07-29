#include "main.h"

/**
 * puts2 - do something
 * @str: int or char
 * Return: some thing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
