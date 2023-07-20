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
