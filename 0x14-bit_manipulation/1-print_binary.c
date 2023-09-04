#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
*/
void print_binary(unsigned long int n)
{
	int shifts;
	unsigned long int tmp = n;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (shifts = 0; (tmp >>= 1) > 0; shifts++)
	;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			putchar('1');
		else
			putchar('0');
	}
}
