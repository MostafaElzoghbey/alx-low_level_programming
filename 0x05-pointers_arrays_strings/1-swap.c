#include "main.h"

/**
 * swap_int - do something
 * @a: int or char
 * @b: int or char
 * Return: some thing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
