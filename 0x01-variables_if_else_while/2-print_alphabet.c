#include <stdio.h>

/**
 * print_alphabet
*/
int main(void)
{
    char x;
    x = 'a';
    while (x <= 'z')
    {
        putchar(x);
        x += 1;
    }
    putchar("\n");
    return (0);
}
