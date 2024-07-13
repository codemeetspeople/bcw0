#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if ( x % 3 == 0 ) {
        printf("alpha\n");
    } else if ( x % 5 == 0 ) {
        printf("bravo\n");
    } else if ( x % 7 == 0 ) {
        printf("delta\n");        
    } else {
        printf("charlie\n");
    }
    

    return 0;
}
