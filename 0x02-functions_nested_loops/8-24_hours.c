#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
    int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			
            putchar((i / 10) + 48);
            putchar((i % 10) + 48);
            putchar(':');
            putchar((j / 10) + 48);
            putchar((j % 10) + 48);
            putchar('\n');
		}
	}
}

