#include <stdio.h>

int main() {
    // Definition
    int x, y;

    // Initialization
    scanf("%d%d", &x, &y);

    // Output
    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d - %d = %d\n", x, y, x-y);
    printf("%d * %d = %d\n", x, y, x*y);
    printf("%d / %d = %d\n", x, y, x/y);
    printf("%d %% %d = %d\n", x, y, x%y);

    return 0;
}
