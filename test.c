#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int row = 1, number = 1; row <= total; row++ ) {
        for ( int column = 1; column < row; column++ ) {
            printf("%d_", number);
            number += 1;
        }
        printf("%d\n", number);
        number += 1;
    }
    
    return 0;
}
