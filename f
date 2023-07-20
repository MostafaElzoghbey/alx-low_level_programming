#!/bin/bash
touch $@
for i in $@
do
   cat > $i << e
#include <stdio.h>

/**
 * main - do something
 * Return: Always 0 (Success)
 */
int main(void)
{
	return (0);
}
e
chmod 775 $i
done
