#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    int i;
    long int result = 1;
    for (i = 0; i < y; i++) {
        result *= x;
    }
    printf("x^y = %d", result);

    return 0;
}