#include <stdio.h>

int main() {
    int dividend, divisor;
    int multiple;

    scanf("%d %d", &dividend, &divisor);

    multiple = dividend - (dividend % divisor);

    if ( divisor < 0 ) {
        divisor *= -1;
    }
    if ( multiple < dividend ) {
        multiple += divisor;
    }

    printf("%d\n", multiple);

    return 0;
}
