#include <stdio.h>

/**
 * main - do something
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, n1, n2, r;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld, ", n1, n2);
	for(i = 1; i <= 48; i++)
	{
		r = n1 + n2;
		printf("%ld, ", r);
		n1 = n2;
		n2 = r;
	}
	printf("\n");

	return (0);
}
