#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1 = _atoi(argv[1]);
	int n2 = _atoi(argv[2]);

	printf("%d\n", n1 + n2);

	return (0);
}
