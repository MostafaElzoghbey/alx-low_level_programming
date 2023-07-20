#include <stdio.h>

/**
 * main - do something
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, n1, n2, r, sum;

	i = 0;
	n1 = 1;
	n2 = 2;
	r = 0,
	sum = 0;
	while (r <= 4000000)
	{
		i += 1;
		r = n1 + n2;
		if (r <= 4000000)
		{
			if (i % 2 == 0)
			{
				sum += r;
			}
			n1 = n2;
			n2 = r;
		}
	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}
