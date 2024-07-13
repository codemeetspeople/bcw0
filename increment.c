#include <stdio.h>

int main() {
    int limit, counter;
    int last;

    scanf("%d", &limit);

    last = limit - 1;
    
    for ( counter = 0; counter < last; counter++ ) {
        printf("%d ", counter);
    }
    printf("%d\n", last);

    return 0;
}
