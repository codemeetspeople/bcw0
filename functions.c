#include <stdio.h>

int sequenceSum(int value) {
    int returnValue = 0;

    for ( int i = 1; i <= value; i++ ) {
        returnValue += i;
    }

    return returnValue;
}

int factorial(int n) {
    int value = 1;

    for ( int i = 2; i <= n; i++ ) {
        value *= i;
    }

    return value;
}

void printLine(int max) {
    for ( int i = 1; i < max; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
}

void printColumn(int max) {
    for ( int i = 1; i <= max; i++ ) {
        printf("%d\n", i);
    }
}

int square(int x) {
    return x * x;
}


int main() {
    int limit;

    scanf("%d", &limit);

    for ( int i = 1; i <= limit; i++ ) {
        printf("%d! = %d\n", i, factorial(i));
        printf("%d^2 = %d\n", i, square(i));
        printf("sum(%d) = %d\n", i, sequenceSum(i));
        printf("\n");
    }

    return 0;
}
