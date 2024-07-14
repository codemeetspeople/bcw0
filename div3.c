#include <stdio.h>

#define DIVISOR 10

int main() {
    int min, max;
    int multiple;

    scanf("%d %d", &min, &max);

    multiple = min - min % DIVISOR;
    if ( multiple < min ) {
        multiple += DIVISOR;
    }

    for ( int i = multiple; i <= max; i += DIVISOR ) {
        printf("%d\n", i);
    }

    return 0;
}
