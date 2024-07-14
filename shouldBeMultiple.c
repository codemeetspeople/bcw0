#include <stdio.h>

int makeMultiple5(int value) {
    int remainder = value % 5;

    value -= remainder;

    if ( remainder < 0 ) {
        value -= 5;
    }

    return value;
}

int main() {
    printf("%d\n", makeMultiple5(-22)); //-25
    printf("%d\n", makeMultiple5(-2)); //-5
    printf("%d\n", makeMultiple5(1)); // 0
    printf("%d\n", makeMultiple5(7)); // 5
    printf("%d\n", makeMultiple5(13)); // 10
    printf("%d\n", makeMultiple5(16)); // 15
    printf("%d\n", makeMultiple5(19)); // 15

    return 0;
}
