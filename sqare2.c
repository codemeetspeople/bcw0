#include <stdio.h>

void square(int size) {
    for ( int row = 1; row <= size; row++ ) {
        for ( int col = 1; col < size; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", size);
    }
}

void square2(int size) {
    int counter = 1;

    for ( int row = 1; row <= size; row++, counter++ ) {
        for ( int col = 1; col < size; col++, counter++ ) {
            printf("%d ", counter);
        }
        printf("%d\n", counter);
    }
}

void square3(int size) {
    int counter = size * size;

    for ( int row = 1; row <= size; row++, counter-- ) {
        for ( int col = 1; col < size; col++, counter-- ) {
            printf("%d ", counter);
        }
        printf("%d\n", counter);
    }
}

void square4(int size) {
    for ( int row = size - 1; row >= 0; row-- ) {
        int counter = row * size + 1;
        
        for ( int col = 1; col < size; col++, counter++ ) {
            printf("%d ", counter);
        }
        printf("%d\n", counter);
    }
}

void square5(int size) {
    for ( int row = size; row > 0; row-- ) {
        int counter = row * size - size + 1;
        
        for ( int col = 1; col < size; col++, counter++ ) {
            printf("%d ", counter);
        }
        printf("%d\n", counter);
    }
}



int main() {
    int size;

    scanf("%d", &size);
    
    square4(size);
    printf("\n");
    square5(size);

    return 0;
}
