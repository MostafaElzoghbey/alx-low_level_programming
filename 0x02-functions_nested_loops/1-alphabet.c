#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
void main(void)
{
	print_alphabet();
}
