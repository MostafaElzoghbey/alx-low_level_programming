#include <stdio.h>

/**
 * prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x += 1;
	}
	putchar('\n');
	return (0);
}
