#include "main.h"

/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change to 1, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int powerOfOne;

	if (index > 64)
		return (-1);

	for (powerOfOne = 1; index > 0; index--, powerOfOne *= 2)
		;
	*n += powerOfOne;

	return (1);
}
