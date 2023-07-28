#!/bin/bash
for i in $@
do
cat > $i << e
#include <stdio.h>

/**
 * main - do something
 * Return: something
 */
int main(void)
{
	return (0);
}
e
done