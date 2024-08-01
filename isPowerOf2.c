#include <stdio.h>

int main() {
    int power;
    
    scanf("%d", &power);

    if ( power != 1 && power % 2 != 0 ) {
        printf("no\n");
    }
    
    for ( int i = power / 2; i > 0; i /= 2 ) {
        if ( ... ) {
            printf("yes\n");
            return 0;
        }
    }
    printf("no\n");
    
    return 0;
}
