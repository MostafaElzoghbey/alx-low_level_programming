#include <stdio.h>

/**
 * main - print some numbers
 * Return zero after printing
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (j != 99 || i != 98)
				{
					putchar(',');
					putchar(' ');

				}				
			}
		}
	}
	putchar('\n');
	return (0);
}
