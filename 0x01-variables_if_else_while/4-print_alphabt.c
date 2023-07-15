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
        if (x != 'q' && x != 'e')
        {
            putchar(x);
            x += 1;
        }
	}
	putchar('\n');
	return (0);
}
