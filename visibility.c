#include <stdio.h>

int x = 10000;

int main() {
    printf("super global x value: %d\n", x);
    printf("super global x address: %p\n", &x);

    int x = 10;

    {
        int x = 42;

        x += 20;

        printf("local x value: %d\n", x);
        printf("local x address: %p\n", &x);
    }

    printf("global x value: %d\n", x);
    printf("global x address: %p\n", &x);


    return 0;
}
