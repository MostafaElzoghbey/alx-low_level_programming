#include <stdio.h>

/**
 * main - do something
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, r;

	for (n1 = 3; n1 <= 1024; n1 *= 3)
	{
		r += n1;
	}
	for (n2 = 5; n2 <= 1024; n2 *= 5)
	{
		r += n2;
	}
	printf("%d", r);

	return (0);
}
