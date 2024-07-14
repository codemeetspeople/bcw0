#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int prod(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}


int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, sum(x, y));
    printf("%d - %d = %d\n", x, y, diff(x, y));
    printf("%d * %d = %d\n", x, y, mult(x, y));
    printf("%d / %d = %d\n", x, y, prod(x, y));
    printf("%d %% %d = %d\n", x, y, mod(x, y));

    return 0;
}
