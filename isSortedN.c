#include <stdio.h>

int main() {
    int len, prev;

    scanf("%d", &len);

    scanf("%d", &prev);
    for ( int i = 1; i < len; i++ ) {
        int next;

        scanf("%d", &next);

        if ( prev > next ) {
            printf("no\n");
            return 0;
        }
        prev = next;
    }
    printf("yes\n");

    return 0;
}
