#include <stdio.h>

/**
 * main - do something
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum3, sum5, r;
	int i;

	sum3 = 0;
	sum5 = 0;
	r = 0;

	for (i = 0; i <= 1024; i ++)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	r = sum3 + sum5;
	printf("%ld", r);

	return (0);
}
