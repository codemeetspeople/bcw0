#include <stdio.h>

unsigned int average(unsigned int a, unsigned int b) {
    return (a / 2) + (b / 2);
}

int main() {
    unsigned int x;
    unsigned int y;

    scanf("%u %u", &x, &y);

    printf("%u\n", average(x, y));

    return 0;
}
