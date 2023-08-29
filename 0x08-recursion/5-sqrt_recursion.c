#include "main.h"

/**
 * actual_recursion - count the natural square root of a number by recursion
 * @n: the number
 * @root: the answer
 *
 * Return: the root of the number
*/
int actual_recursion(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);

	return (actual_recursion(n, root + 1));
}

/**
 * _sqrt_recursion - count the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_recursion(n, 0));
}
