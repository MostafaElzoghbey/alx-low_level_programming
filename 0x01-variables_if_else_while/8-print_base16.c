#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	char c;

	for (c = 'a'; c < 'g';c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
