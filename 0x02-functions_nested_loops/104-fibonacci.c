// #include <stdio.h>

// /**
//  * main - do something
//  * Return: Always 0 (Success)
//  */
// int main(void)
// {
// 	unsigned long int i, n1, n2, r;

// 	n1 = 1;
// 	n2 = 2;
// 	printf("%lu, %lu, ", n1, n2);
// 	for (i = 1; i <= 98; i++)
// 	{
// 		r = n1 + n2;
// 		if (i != 98)
// 		{
// 			printf("%lu, ", r);

// 		} else
// 		{
// 			printf("%lu", r);
// 		}
// 		n1 = n2;
// 		n2 = r;
// 	}
// 	printf("\n");

// 	return (0);
// }
#include <stdio.h>

int main() {
    unsigned long long a = 1, b = 2, c;
    printf("%llu, %llu", a, b);
    for(int i = 2; i < 98; i++) {
        c = a + b;
        printf(", %llu", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
