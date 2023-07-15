#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x1;
	int x2;
	int x3;

	for (x3 = 0; x3 < 8; x3++)
	{
		for (x2 = 0; x2 < 9; x2++)
		{
			for (x1 = 0; x1 < 10; x1++)
			{
				if (x1 > x2 && x2 > x3)
				{
					putchar('0' + x3);
					putchar('0' + x2);
					putchar('0' + x1);
					if (x1 != 9 || x2 != 8 || x3 != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
