#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * main - do something
 * Return: Always 0 (Success)
 */
int add(int n1, int n2)
{
    long int r = n1 + n2;
    return (r);
}
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
