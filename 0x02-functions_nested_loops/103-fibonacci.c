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
		if (r <= 4000000)
		{
			printf("%ld, ", r);
			if ((i % 2) == 0)
			{
				sum += n2;
			}
		}
		r = n1 + n2;
		n1 = n2;
		n2 = r;
		i += 1;
	}
	printf("\n");
	printf("%ld", sum);
	printf("\n");

	return (0);
}
