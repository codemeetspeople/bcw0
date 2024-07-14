#include <stdio.h>

int main() {
    int max;

    scanf("%d", &max);

    max = max - max % 3;

    for ( int i = 0; i < max; i += 3 ) {
        printf("%d ", i);
    }
    printf("%d\n", max);

    return 0;
}
