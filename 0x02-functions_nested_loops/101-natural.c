#include <stdio.h>

/**
 * main - do something
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, sum3, sum5;

	for (i = 3; i <= 1024; i ++)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	printf("%d", sum3 + sum5);

	return (0);
}
