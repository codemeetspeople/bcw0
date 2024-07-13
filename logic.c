#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    // && - and
    if ( x > 0 && y > 0 ) {
        printf("alpha\n");
    }

    // || - or
    if ( x % 2 == 0 || y % 2 == 0 ) {
        printf("bravo\n");
    }

    return 0;
}
