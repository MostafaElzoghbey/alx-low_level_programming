#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x += 1;
	}
	x = 'A';
	while (x <= 'Z')
	{
		putchar(x);
		x += 1;
	}
	putchar('\n');
	return (0);
}
