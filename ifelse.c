#include <stdio.h>

int main() {
    int x;
    int isZulu = 1;

    scanf("%d", &x);

    if ( x % 3 == 0 ) {
        printf("alpha\n");
        isZulu = 0;
    }
    if ( x % 5 == 0 ) {
        printf("bravo\n");
        isZulu = 0;
    }
    if ( x % 10 == 0 ) {
        printf("delta\n");
        isZulu = 0;
    }

    if ( isZulu == 1 ) {
        printf("zulu\n");
    }
    
    return 0;
}
