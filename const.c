#include <stdio.h>

int main() {
    int max;
    const divisor = 3;

    scanf("%d", &max);

    max -= max % divisor;

    for ( int i = 0; i < max; i += divisor ) {
        printf("%d ", i);
    }
    printf("%d\n", max);

    return 0;
}
