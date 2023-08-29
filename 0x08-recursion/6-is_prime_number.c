#include "main.h"


int prime_test_rec(int n, int i)
{
	if (n == 0 || n == 1)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	prime_test_rec(n, i + 1);
	return (0);
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: the number
 * 
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 * 
*/
int is_prime_number(int n)
{
	return (prime_test_rec(n, 2));
}
